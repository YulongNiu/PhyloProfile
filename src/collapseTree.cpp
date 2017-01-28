#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
#include "collapseTree.h"

using namespace Rcpp;
using namespace arma;


//' @rdname collapseTree
// [[Rcpp::export]]
arma::umat CollapseTree(arma::umat edgeMat,
                        arma::uword tipNum,
                        arma::uvec f,
                        arma::uvec t) {

  // select node mat and tip mat
  uvec tipnode = edgeMat.col(1);
  umat tipMat = edgeMat.rows(find(tipnode <= tipNum));
  umat nodeMat = edgeMat.rows(find(tipnode > tipNum));

  // joint ft with tipMat
  umat ft = join_rows(f, t);
  tipMat = join_rows(tipMat, ft);

  // initiate cm(collapseMat)
  umat cm(0, 4);

  while (true) {
    uvec uniqNodes = unique(tipMat.col(0));

    if (uniqNodes.n_elem == tipMat.n_rows) {
      cm = join_cols(cm, tipMat);
      break;
    }  else {}

    for (uword i = 0; i < uniqNodes.n_elem; ++i) {
      uvec nodeIdx = tipMat.col(0) == uniqNodes(i);

      if (sum(nodeIdx) > 1) {
        // one node has multiple tips
        umat tipMulM = tipMat.rows(find(nodeIdx));

        if (isTwoRowsEqual(tipMulM.cols(2, 3))) {
          // 1. construct the new vec
          urowvec newV(4);
          uvec rpIdx = find(nodeMat.col(1) == uniqNodes(i));
          newV.subvec(0, 1) = nodeMat.row(rpIdx(0)).subvec(0, 1);
          newV.subvec(2, 3) = tipMulM.row(0).subvec(2, 3);

          // 2. delete multiple tips
          tipMat = tipMat.rows(find(1 - nodeIdx));

          // 3. rbind tipMat with new vec
          tipMat = join_cols(tipMat, newV);
        } else {
          // 1. rbind cm with tipMulM
          cm = join_cols(cm, tipMulM);

          // 2. delete multiple tips
          tipMat = tipMat.rows(find(1 - nodeIdx));
        }
      } else {}
    }
  }
  return cm;
}


// [[Rcpp::export]]
bool isTwoRowsEqual(arma::umat m) {
  return sum(m.row(0) == m.row(1)) == m.n_cols;
}


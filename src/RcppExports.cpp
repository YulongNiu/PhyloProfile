// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// InferGainNodes
arma::uvec InferGainNodes(Rcpp::List gainList);
RcppExport SEXP PhyloProfile_InferGainNodes(SEXP gainListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type gainList(gainListSEXP);
    rcpp_result_gen = Rcpp::wrap(InferGainNodes(gainList));
    return rcpp_result_gen;
END_RCPP
}
// InferEdge
arma::imat InferEdge(arma::umat edgeMat, Rcpp::List tipPath, arma::uvec pr);
RcppExport SEXP PhyloProfile_InferEdge(SEXP edgeMatSEXP, SEXP tipPathSEXP, SEXP prSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type edgeMat(edgeMatSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type tipPath(tipPathSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type pr(prSEXP);
    rcpp_result_gen = Rcpp::wrap(InferEdge(edgeMat, tipPath, pr));
    return rcpp_result_gen;
END_RCPP
}
// DolloDist
arma::uword DolloDist(arma::umat edgeMat, Rcpp::List tipPath, arma::uvec pr1, arma::uvec pr2);
RcppExport SEXP PhyloProfile_DolloDist(SEXP edgeMatSEXP, SEXP tipPathSEXP, SEXP pr1SEXP, SEXP pr2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type edgeMat(edgeMatSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type tipPath(tipPathSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type pr1(pr1SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type pr2(pr2SEXP);
    rcpp_result_gen = Rcpp::wrap(DolloDist(edgeMat, tipPath, pr1, pr2));
    return rcpp_result_gen;
END_RCPP
}
// MergeList
arma::uvec MergeList(Rcpp::List x);
RcppExport SEXP PhyloProfile_MergeList(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(MergeList(x));
    return rcpp_result_gen;
END_RCPP
}
// CountRepeatIdx
arma::uword CountRepeatIdx(arma::uword idx, arma::uvec y);
RcppExport SEXP PhyloProfile_CountRepeatIdx(SEXP idxSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(CountRepeatIdx(idx, y));
    return rcpp_result_gen;
END_RCPP
}
// SimJaccard
double SimJaccard(arma::umat pairProfile);
RcppExport SEXP PhyloProfile_SimJaccard(SEXP pairProfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type pairProfile(pairProfileSEXP);
    rcpp_result_gen = Rcpp::wrap(SimJaccard(pairProfile));
    return rcpp_result_gen;
END_RCPP
}

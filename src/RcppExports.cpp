// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// celdaCGcalcGibbsProbZ
double celdaCGcalcGibbsProbZ(double mCPbyS, NumericVector nCPbyTS, NumericVector nCP, int L, double alpha, double beta);
RcppExport SEXP _celda_celdaCGcalcGibbsProbZ(SEXP mCPbySSEXP, SEXP nCPbyTSSEXP, SEXP nCPSEXP, SEXP LSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mCPbyS(mCPbySSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nCPbyTS(nCPbyTSSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nCP(nCPSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(celdaCGcalcGibbsProbZ(mCPbyS, nCPbyTS, nCP, L, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// celdaCGcalcGibbsProbY
double celdaCGcalcGibbsProbY(NumericVector nCPbyTS, NumericVector nByTS, NumericVector nGbyTS, int nGinY, double beta, double delta, double gamma);
RcppExport SEXP _celda_celdaCGcalcGibbsProbY(SEXP nCPbyTSSEXP, SEXP nByTSSEXP, SEXP nGbyTSSEXP, SEXP nGinYSEXP, SEXP betaSEXP, SEXP deltaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type nCPbyTS(nCPbyTSSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nByTS(nByTSSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nGbyTS(nGbyTSSEXP);
    Rcpp::traits::input_parameter< int >::type nGinY(nGinYSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(celdaCGcalcGibbsProbY(nCPbyTS, nByTS, nGbyTS, nGinY, beta, delta, gamma));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_celda_celdaCGcalcGibbsProbZ", (DL_FUNC) &_celda_celdaCGcalcGibbsProbZ, 6},
    {"_celda_celdaCGcalcGibbsProbY", (DL_FUNC) &_celda_celdaCGcalcGibbsProbY, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_celda(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

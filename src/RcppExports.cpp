// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// run
Rcpp::List run(SEXP dataset, SEXP model_control, SEXP sgd_control);
RcppExport SEXP _sgd_run(SEXP datasetSEXP, SEXP model_controlSEXP, SEXP sgd_controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< SEXP >::type model_control(model_controlSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sgd_control(sgd_controlSEXP);
    rcpp_result_gen = Rcpp::wrap(run(dataset, model_control, sgd_control));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sgd_run", (DL_FUNC) &_sgd_run, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sgd(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

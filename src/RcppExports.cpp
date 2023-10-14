// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// blm_conjugate_cpp
Rcpp::List blm_conjugate_cpp(const arma::mat& Y, const arma::mat& X, const int& S, const Rcpp::List& prior);
RcppExport SEXP _btse_blm_conjugate_cpp(SEXP YSEXP, SEXP XSEXP, SEXP SSEXP, SEXP priorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    rcpp_result_gen = Rcpp::wrap(blm_conjugate_cpp(Y, X, S, prior));
    return rcpp_result_gen;
END_RCPP
}
// blm_independent_cpp
Rcpp::List blm_independent_cpp(const arma::mat& Y, const arma::mat& X, const int& S, const int& burn, const int& thin, const Rcpp::List& prior);
RcppExport SEXP _btse_blm_independent_cpp(SEXP YSEXP, SEXP XSEXP, SEXP SSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP priorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    rcpp_result_gen = Rcpp::wrap(blm_independent_cpp(Y, X, S, burn, thin, prior));
    return rcpp_result_gen;
END_RCPP
}
// bvar_cpp
Rcpp::List bvar_cpp(const arma::mat& Y, const int& k, const std::string& model, const int& S, const int& burn, const int& thin, const Rcpp::List& prior);
RcppExport SEXP _btse_bvar_cpp(SEXP YSEXP, SEXP kSEXP, SEXP modelSEXP, SEXP SSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP priorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const int& >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< const int& >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    rcpp_result_gen = Rcpp::wrap(bvar_cpp(Y, k, model, S, burn, thin, prior));
    return rcpp_result_gen;
END_RCPP
}
// estimate_irf_cpp
Rcpp::List estimate_irf_cpp(Rcpp::List posterior, const int& periods, const bool& structural);
RcppExport SEXP _btse_estimate_irf_cpp(SEXP posteriorSEXP, SEXP periodsSEXP, SEXP structuralSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type posterior(posteriorSEXP);
    Rcpp::traits::input_parameter< const int& >::type periods(periodsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type structural(structuralSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_irf_cpp(posterior, periods, structural));
    return rcpp_result_gen;
END_RCPP
}
// identify_longrun_cpp
Rcpp::List identify_longrun_cpp(Rcpp::List posterior);
RcppExport SEXP _btse_identify_longrun_cpp(SEXP posteriorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type posterior(posteriorSEXP);
    rcpp_result_gen = Rcpp::wrap(identify_longrun_cpp(posterior));
    return rcpp_result_gen;
END_RCPP
}
// identify_shortrun_cpp
Rcpp::List identify_shortrun_cpp(Rcpp::List posterior);
RcppExport SEXP _btse_identify_shortrun_cpp(SEXP posteriorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type posterior(posteriorSEXP);
    rcpp_result_gen = Rcpp::wrap(identify_shortrun_cpp(posterior));
    return rcpp_result_gen;
END_RCPP
}
// identify_sign_cpp
Rcpp::List identify_sign_cpp(Rcpp::List posterior, const arma::mat& sign);
RcppExport SEXP _btse_identify_sign_cpp(SEXP posteriorSEXP, SEXP signSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type posterior(posteriorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sign(signSEXP);
    rcpp_result_gen = Rcpp::wrap(identify_sign_cpp(posterior, sign));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_btse_blm_conjugate_cpp", (DL_FUNC) &_btse_blm_conjugate_cpp, 4},
    {"_btse_blm_independent_cpp", (DL_FUNC) &_btse_blm_independent_cpp, 6},
    {"_btse_bvar_cpp", (DL_FUNC) &_btse_bvar_cpp, 7},
    {"_btse_estimate_irf_cpp", (DL_FUNC) &_btse_estimate_irf_cpp, 3},
    {"_btse_identify_longrun_cpp", (DL_FUNC) &_btse_identify_longrun_cpp, 1},
    {"_btse_identify_shortrun_cpp", (DL_FUNC) &_btse_identify_shortrun_cpp, 1},
    {"_btse_identify_sign_cpp", (DL_FUNC) &_btse_identify_sign_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_btse(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

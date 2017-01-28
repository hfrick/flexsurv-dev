// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dgengamma_work
Rcpp::NumericVector dgengamma_work(const Rcpp::NumericVector& x, const Rcpp::NumericVector& mu, const Rcpp::NumericVector& sigma, const Rcpp::NumericVector& Q, const bool log);
RcppExport SEXP flexsurv_dgengamma_work(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(dgengamma_work(x, mu, sigma, Q, log));
    return rcpp_result_gen;
END_RCPP
}
// pgengamma_work
Rcpp::NumericVector pgengamma_work(const Rcpp::NumericVector& q, const Rcpp::NumericVector& mu, const Rcpp::NumericVector& sigma, const Rcpp::NumericVector& Q, const bool lower_tail, const bool give_log);
RcppExport SEXP flexsurv_pgengamma_work(SEXP qSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP, SEXP lower_tailSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type q(qSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const bool >::type lower_tail(lower_tailSEXP);
    Rcpp::traits::input_parameter< const bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(pgengamma_work(q, mu, sigma, Q, lower_tail, give_log));
    return rcpp_result_gen;
END_RCPP
}
// dgompertz_work
Rcpp::NumericVector dgompertz_work(const Rcpp::NumericVector& x, const Rcpp::NumericVector& shape, const Rcpp::NumericVector& rate, const bool log);
RcppExport SEXP flexsurv_dgompertz_work(SEXP xSEXP, SEXP shapeSEXP, SEXP rateSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< const bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(dgompertz_work(x, shape, rate, log));
    return rcpp_result_gen;
END_RCPP
}

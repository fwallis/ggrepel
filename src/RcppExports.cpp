// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// euclid
double euclid(NumericVector p1, NumericVector p2);
RcppExport SEXP ggrepel_euclid(SEXP p1SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p2(p2SEXP);
    __result = Rcpp::wrap(euclid(p1, p2));
    return __result;
END_RCPP
}
// put_within_bounds
NumericVector put_within_bounds(NumericVector b, NumericVector xlim, NumericVector ylim);
RcppExport SEXP ggrepel_put_within_bounds(SEXP bSEXP, SEXP xlimSEXP, SEXP ylimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xlim(xlimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ylim(ylimSEXP);
    __result = Rcpp::wrap(put_within_bounds(b, xlim, ylim));
    return __result;
END_RCPP
}
// centroid
NumericVector centroid(NumericVector b);
RcppExport SEXP ggrepel_centroid(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(centroid(b));
    return __result;
END_RCPP
}
// overlaps
bool overlaps(NumericVector a, NumericVector b);
RcppExport SEXP ggrepel_overlaps(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(overlaps(a, b));
    return __result;
END_RCPP
}
// point_within_box
bool point_within_box(NumericVector p, NumericVector b);
RcppExport SEXP ggrepel_point_within_box(SEXP pSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(point_within_box(p, b));
    return __result;
END_RCPP
}
// compute_force
NumericVector compute_force(NumericVector a, NumericVector b, double force);
RcppExport SEXP ggrepel_compute_force(SEXP aSEXP, SEXP bSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type force(forceSEXP);
    __result = Rcpp::wrap(compute_force(a, b, force));
    return __result;
END_RCPP
}
// repel_boxes
DataFrame repel_boxes(NumericMatrix boxes, NumericVector xlim, NumericVector ylim, double force, int maxiter);
RcppExport SEXP ggrepel_repel_boxes(SEXP boxesSEXP, SEXP xlimSEXP, SEXP ylimSEXP, SEXP forceSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type boxes(boxesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xlim(xlimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ylim(ylimSEXP);
    Rcpp::traits::input_parameter< double >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    __result = Rcpp::wrap(repel_boxes(boxes, xlim, ylim, force, maxiter));
    return __result;
END_RCPP
}
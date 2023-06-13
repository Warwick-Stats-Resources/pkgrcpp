#include <Rcpp.h>
using namespace Rcpp;

//' Add a Vector of Numbers
//'
//' Return the sum of a vector.
//' @param x A numeric vector
//' @examples sumC(c(1, 3, 6))
//' @export
// [[Rcpp::export]]
double sumC(NumericVector x) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total;
}

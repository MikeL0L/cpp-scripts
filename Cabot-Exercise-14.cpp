#include <iostream>
using namespace std;

class Rational {
 public:
  Rational(int n = 0, int d = 1) : n_(n), d_(d) { N(); }
  Rational operator+(const Rational& o) const {
    int n = n_ * o.d_ + d_ * o.n_;
    return Rational(n, d_ * o.d_);
  }
  friend ostream& operator<<(ostream& o, const Rational& r);

 private:
  void N() {
    int g = GCD(n_, d_);
    n_ /= g;
    d_ /= g;
  }
  int GCD(int a, int b) {
    while (b) {
      int t = b;
      b = a % b;
      a = t;
    }
    return a;
  }
  int n_, d_;
};

ostream& operator<<(ostream& o, const Rational& r) {
  o << r.n_ << "/" << r.d_;
  return o;
}

int main() {
  Rational s(0);
  for (int i = 1; i <= 100; ++i) {
    s = s + Rational(i, i + 1);
  }
  cout << "The sum of the given series is: " << s << endl;
  return 0;
}
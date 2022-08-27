#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


using ldouble = long double;
using Point = complex<ldouble>;
const ldouble EPS = 1e-7;
const ldouble PI = acos(-1);


// ラジアン・度変換
ldouble rad2deg(const ldouble& rad) { return rad * 180.0 / PI; }
ldouble deg2rad(const ldouble& deg) { return deg * PI / 180.0; }


int main() {
  cout << rad2deg(1) << '\n';
  cout << deg2rad(35) << '\n';
  return 0;
}
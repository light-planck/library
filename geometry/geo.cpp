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


bool equal(const ldouble& a, const ldouble& b) {
  return fabs(a - b) < EPS;
}


// 単位ベクトル
Point unit_vector(const Point& a) { return a / abs(a); }


// 法線ベクトル
Point normal_vector(const Point& a) { return a * Point(0, 1); }


// 内積
ldouble dot(const Point& a, const Point& b) {
  return a.real()*b.real() + a.imag()*b.imag();
}


// 外積
ldouble cross(const Point& a, const Point& b) {
  return a.real()*b.imag() - a.imag()*b.real();
}


// 点pを反時計回りにtheta回転
Point rotate(const Point& p, const ldouble& theta) {
  return Point( cos(theta)*p.real() - sin(theta)*p.imag(),
                sin(theta)*p.real() + cos(theta)*p.imag() );
}


int main() {
  
  return 0;
}
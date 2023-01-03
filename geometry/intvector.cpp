#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


struct IntVector {
  ll x, y;
  IntVector(ll x_=0, ll y_=0) : x(x_), y(y_) {};

  IntVector operator + (const IntVector & other) {
    return IntVector(x + other.x, y + other.y);
  }
  IntVector operator - (const IntVector & other) {
    return IntVector(x - other.x, y - other.y);
  }
};


// 点pを反時計回りに90度回転したベクトルを得る
IntVector rotate90(const IntVector& p) {
  return IntVector(-p.y, p.x);
}
// 内積
ll dot(const IntVector& a, const IntVector& b) {
  return (a.x * b.x) + (a.y * b.y);
}
// 外積
ll cross(const IntVector& a, const IntVector& b) {
  return (a.x * b.y) - (a.y * b.x);
}


int main() {
  vector<IntVector> p(4);
  rep(i, 2) {
    ll x, y;
    cin >> x >> y;
    p[i] = IntVector(x, y);
  }

  IntVector a = p[1] - p[0];
  a = rotate90(a);
  p[2] = p[1] + a;
  p[3] = p[0] + a;

  cout << p[2].x << " " << p[2].y << '\n';
  cout << p[3].x << " " << p[3].y << '\n';
  return 0;
}
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdint>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define rng(a) (a).begin(),(a).end()
#define rrng(a) (a).rbegin(),(a).rend()
using namespace std;
using ll = long long;
using P = pair<long long, long long>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// #include <atcoder/all>
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;


void print_vec2d(const vector<vector<long long>>& a, string name="vec2d") {
  int h = a.size();
  int w = a[0].size();

  cout << "\n";
  cout << name << "\n";
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (j) cout << " ";
      cout << a[i][j];
    }

    cout << "\n";
  }
  cout << "\n";
}


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll h = 10;
  ll w = 5;
  vector<vector<ll>> a(h, vector<ll>(w));
  rep(i, h) rep(j, w) {
    a[i][j] = i + j;
  }

  print_vec2d(a);
  return 0;
}
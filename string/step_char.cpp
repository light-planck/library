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
#include <string>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using P = pair<long long, long long>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// #include <atcoder/all>
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;


// 大文字cのstep先の大文字
char step_uppercase(char c, ll step) {
  c = 'A' + (c- 'A' + step)%26;
  return c;
}


// 小文字cのstep先の小文字
char step_lowercase(char c, ll step) {
  c = 'a' + (c - 'a' + step)%26;
  return c;
}


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cout << step_uppercase('A', 27) << "\n";
  return 0;
}
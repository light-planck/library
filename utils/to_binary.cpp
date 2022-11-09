#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


// 10進数(ll)を2進数(string)に変換
string to_binary(ll n) {
  string res = "";
  while (n > 0) {
    if (n & 1) res += '1';
    else res += '0';
    n >>= 1;
  }
  reverse(res.begin(), res.end());
  return res;
}


int main() {
  ll n;
  cin >> n;

  string ans = to_binary(n);
  ll padding = 10 - ans.size();
  ans = string(padding, '0') + ans;
  cout << ans << '\n';
  return 0;
}
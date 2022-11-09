#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


// 2進数(string)を10進数(ll)に変換
ll to_decimal(string s) {
  ll d = 2;
  ll res = 0;
  for (auto c : s) {
    res = res*d + (c-'0');
  }
  return res;
}


int main() {
  string s;
  cin >> s;

  cout << to_decimal(s) << '\n';
  return 0;
}
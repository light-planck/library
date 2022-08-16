#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


auto rle(const string& s) {
  vector<pair<char, ll>> res;
  ll l = 0;
  ll r = l + 1;
  ll n = s.size();
  for (ll l = 0; l < n; ) {
    while (s[l] == s[r] and r < n) ++r;
    res.emplace_back(s[l], r-l);
    l = r;
  }
  return res;
}


int main() {
  string s = "hellooo";
  auto t = rle(s);
  for (auto [c, cnt] : t) {
    cout << c << ": " << cnt << endl;
  }
  return 0;
}
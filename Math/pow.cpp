#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

const int MOD = 1e9 + 7;
long long mod_pow(long long x, long long n) {
  long long res = 1;

  while (n > 0) {
    if (n & 1) (res *= x) %= MOD;
    (x *= x) %= MOD;
    n >>= 1;
  }

  return res;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll m, n;
  cin >> m >> n;

  cout << Pow(m, n) << "\n";
  return 0;
}
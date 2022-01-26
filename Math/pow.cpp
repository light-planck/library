#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

const int kMod = 1e9 + 7;
long long Pow(long long x, long long n) {
  long long res = 1;

  while (n > 0) {
    if (n & 1) (res *= x) %= kMod;
    (x *= x) %= kMod;
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
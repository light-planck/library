#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


auto factorize(ll n) {
  map<ll, ll> primes;

  for (ll i = 2; i*i <= n; ++i) {
    if (n % i != 0) continue;

    ll ex = 0;
    while (n % i == 0) {
      ++ex;
      n /= i;
    }

    primes[i] = ex;
  }

  if (n != 1) primes[n] = 1;

  return primes;
}


int main() {
  ll q;
  cin >> q;

  while (q--) {
    ll a;
    cin >> a;

    auto primes = factorize(a);

    ll k = 0;
    for (auto [p, ex] : primes) k += ex;
    cout << k << " ";

    for (auto [p, ex] : primes) {
      rep(i, ex) cout << p << " ";
    }
    cout << '\n';
  }
  return 0;
}
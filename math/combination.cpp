#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


struct Combination {
  const long long MOD = 1e9+7;
  // const long long MOD = 998244353;
  long long size_;
  vector<long long> fact, fact_inv, inv;

  Combination(long long size)
      : size_(size + 10),
        fact(vector<long long>(size_)),
        fact_inv(vector<long long>(size_)), 
        inv(vector<long long>(size_)) {
    fact[0] = fact[1] = 1;
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;

    for (long long i = 2; i < size_; ++i) {
      fact[i] = fact[i - 1] * i % MOD;
      inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
      fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
    }
  }

  long long comb(long long n, long long k) {
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;

    return fact[n] * (fact_inv[k] * fact_inv[n - k] % MOD) % MOD;
  }
};


int main() {
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;


// 素因数分解
vector<pair<long long, long long>> prime_factorize(long long n) {
  vector<pair<long long, long long>> primes;

  for (long long i = 2; i * i <= n; ++i) {
    if (n % i != 0) continue;

    long long exponent = 0;
    while (n % i == 0) {
      ++exponent;
      n /= i;
    }

    primes.emplace_back(make_pair(i, exponent));
  }

  // 上の処理後にnが1でないならnは素数
  if (n != 1) {
    primes.emplace_back(make_pair(n, 1));
  }

  return primes;
}


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  
  return 0;
}
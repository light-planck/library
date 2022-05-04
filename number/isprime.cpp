#include <bits/stdc++.h>
using namespace std;


// 2, 3, ... , sqrt(n)まで調べればよい
bool is_prime(long long x) {
  if (x < 2) return false;

  for (long long i = 2; i * i <= x; ++i) {
    if (x % i == 0) return false;
  }

  return true;
}
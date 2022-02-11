#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 2, 3, ... , sqrt(n)まで調べればよい

bool IsPrime(long long n) {
  if (n <= 1) return false;
  if (n == 2) return true;

  for (long long i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }

  return true;
}

int main() {
  int a = 9;
  int b = 5;
  if (isprime(b)) cout << b << " is prime" << endl;
  else cout << a << " is not prime" << endl;
  return 0;
}
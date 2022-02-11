#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> eratos(ll n) {
  vector<bool> isprime(n+1, true);
  isprime[0] = false;
  isprime[1] = false;
  
  for (ll p = 2; p <= n; p++) {
    if (!isprime[p]) continue;
    for (ll q = p * 2; q <= n; q += p) {
      isprime[q] = false;
    }
  }
  return isprime;
}

int main() {
  int n = 13;
  vector<bool> isprime = eratos(n);
  for (int i = 0; i <= n; i++) {
    cout << i;
    if (isprime[i]) cout << " is prime" << endl;
    else cout << " is not prime" << endl;
  }
  return 0;
}
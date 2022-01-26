#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// a, bの最大公約数
ll gcd(ll a, ll b) {
  if (a < b) swap(a, b);
  if (b == 0) return a;
  else return gcd(b, a % b);
}

// a, bの最小公倍数
ll lcm(ll a, ll b) {
  return a * b / gcd(a, b);
}

int main() {
  cout << gcd(30, 81) << endl;
  cout << lcm(30, 81) << endl;
  return 0;
}
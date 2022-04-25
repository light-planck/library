#include <bits/stdc++.h>
using namespace std;


// a, bの最大公約数
long long gcd(long long a, long long b) {
  if (a < b) swap(a, b);
  
  if (b == 0) return a;
  else return gcd(b, a % b);
}


// a, bの最小公倍数
long long lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}


int main() {
  cout << gcd(30, 81) << endl;
  cout << lcm(30, 81) << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

ll comb(int n, int r) {
  ll ans = 1;
  for (int i = 0; i < r; i++) {
    ans *= n - i;
    ans /= i + 1;
  }
  return ans;
}

int main() {
  cout << comb(5, 2) << endl;
  return 0;
}
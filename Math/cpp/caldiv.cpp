#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
using ll = long long;

vector<ll> caldiv(ll n) {
  vector<ll> div;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i != 0) continue;
    div.push_back(i);

    // n = i * iの場合を除いて、もう一方の約数を追加
    if (n / i != i) div.push_back(n / i);
  }
  sort(all(div));
  return div;
}

int main() {
  int n = 36;
  for (auto x : caldiv(n)) cout << x << endl;
  return 0;
}
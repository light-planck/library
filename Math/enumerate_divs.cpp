#include <bits/stdc++.h>
using namespace std;


// 約数列挙
vector<long long> enumerate_divs(long long n) {
  vector<long long> divs;

  for (long long i = 1; i * i <= n; i++) {
    if (n % i != 0) continue;
    divs.emplace_back(i);

    // n = i * iの場合を除いて、もう一方の約数を追加
    if (n / i != i) div.push_back(n / i);
  }
  sort(divs.begin(), divs.end());

  return divs;
}


int main() {
  int n = 36;
  for (auto x : enumerate_divs(n)) cout << x << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
const int inf = 1e9;
const int mod = 1e9+7;

int main() {
  //O(loglogN)
  int n = 30;
  bitset<10000> prime(0);
  
  //2 ~ nまでビットを立たせる
  //素数なら1,そうでなけらば0
  for (int i = 2; i <= n; i++) prime.set(i);

  //小さい素数から順にふるい落としていく
  for (int i = 2; i <= sqrt((double)n); i++) {
    if (prime[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        prime.reset(j);
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (prime[i]) cout << i << endl;
  }
  return 0;
}
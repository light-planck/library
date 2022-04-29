#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

class UnionFind {
  private:
    vector<int> parent_;

  public:
    UnionFind(int n)
        : parent_(n, -1) {}

    int Find(int x) {
      // 自身が親の場合
      if (parent_[x] < 0) {
        return x;
      }

      parent_[x] = Find(parent_[x]);
      return parent_[x];
    }

    void Unite(int x, int y) {
      x = Find(x);
      y = Find(y);
      if (x == y) {
        return;
      }

      // 要素数が多い方をxに
      if (parent_[x] > parent_[y]) {
        swap(x, y);
      }

      // xを親に設定
      parent_[x] += parent_[y];
      parent_[y] = x;
    }

    bool Same(int x, int y) {
      return Find(x) == Find(y);
    }

    int Size(int x) {
      return -1 * parent_[Find(x)];
    }
};

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;

  UnionFind uf(n);

  rep(i, q) {
    ll p, a, b;
    cin >> p >> a >> b;
    if (p == 0) uf.Unite(a, b);
    else {
      if (uf.Same(a, b)) cout << "Yes\n";
      else cout << "No\n";
    }
  }
  return 0;
}
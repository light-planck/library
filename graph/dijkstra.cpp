#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdint>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define rng(a) (a).begin(),(a).end()
#define rrng(a) (a).rbegin(),(a).rend()
using namespace std;
using ll = long long;
using P = pair<long long, long long>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// #include <atcoder/all>
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;


vector<ll> dijkstra(vector<P>& edge, ll start=0) {
  ll n = edge.size();

  vector<ll> dist(n, inf);
  dist[start] = 0;

  priority_queue<P, vector<P>, greater<P>> heap;
  heap.emplace(dist[start], start);

  while (!heap.empty()) {
    auto [d, v] = heap.top();
    heap.pop();

    if (dist[v] < d) continue;

    for (auto next_v : edge[v]) {
      ll to = next_v.first;
      ll cost = next_v.second;

      if (dist[to] > dist[v] + cost) {
        dist[to] = dist[v] + cost;
        heap.emplace(dist[to], to);
      }
    }
  }

  return dist;
}


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  
  return 0;
}
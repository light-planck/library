#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


void print() { cout << '\n'; }
template<class T> void print(const T& value) { cout << value << '\n'; }
template<class T, class... A> void print(const T& first, const A&... tail) { cout << first << " "; print(tail...); }
template<class... A> void print(const A&... tail) { print(tail...); }
template<class T> void print(vector<T>& vec) { for (const auto& a : vec) { cout << a << " "; } print(); }
template<class T> void print(vector<vector<T>>& vec2d) { for (auto& vec : vec2d) { print(vec); } }
void print(vector<string>& grid) { for (const auto& row : grid) print(row); }
template<class T, class U> void print(const map<T, U>& mp) { for (const auto& [x, y] : mp) { print(x, y); } }
template<class T> void print(set<T>& st) { for (const auto& a : st) { cout << a << " "; } print(); }


int main() {
  // 改行
  print();

  // 値
  int x = 1;
  print(x);

  // n個の値
  print(1, 2, 3);

  // 1次元配列
  vector<int> vec1d = {1, 2, 3};
  print(vec1d);

  // 2次元配列
  vector<vector<int>> vec2d = {{1, 2}, {3}, {4, 5, 6}};
  print(vec2d);

  // 文字列grid
  vector<string> grid(5, string(5, '#'));
  print(grid);

  // map
  map<string, int> mp = {{"Hello,", 1}, {"world!", 2}};
  print(mp);

  // set
  set<int> st = {1, 2, 3, 4, 5};
  print(st);
  return 0;
}
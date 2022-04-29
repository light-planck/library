void print_vec1(string name, const vector<ll>& v) {
  cout << name << ": ";
  
  for (ll i = 0; i < (ll)v.size(); i++) {
    if (i) cout << " ";
    cout << v[i];
  }

  cout << "\n";
}
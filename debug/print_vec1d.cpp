void print_vec1d(const vector<long long>& v, string name="vec1d_name") {
  cout << name << ": ";
  
  for (int i = 0; i < (int)v.size(); ++i) {
    if (i) cout << " ";
    cout << v[i];
  }

  cout << "\n";
}
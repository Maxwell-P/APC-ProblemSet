#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

int main() {
  long long c[MAX];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> c[i];
  }
  long long ans = 0;
  long long price = 0;
  sort(c, c+n);
  for (int i = 0; i < n; i++){
    if ((n-i)*c[i] > ans){
      ans = (n-i)*c[i];
      price = c[i];
    }
  }
  cout << ans << " " << price << endl;
}
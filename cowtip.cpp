#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("cowtip.in", "r", stdin);
  freopen("cowtip.out", "w", stdout);
  string grid[10];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> grid[i];
  }
  int ans = 0;
  for (int i = n - 1; i >= 0; i--){
    for (int j = n - 1; j >= 0; j--){
      if (grid[i][j] == '1'){
        ans++;
        for (int k = 0; k <= i; k++){
          for (int m = 0; m <= j; m++){
            if (grid[k][m] == '0'){
              grid[k][m] = '1';
            }
            else{
              grid[k][m] = '0';
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}
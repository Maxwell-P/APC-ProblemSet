#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("herding.in", "r", stdin);
  freopen("herding.out", "w", stdout);

  vector<int> n;
  for (int i = 0; i < 3; i++){
    int num;
    cin >> num;
    n.push_back(num);
  }
  sort(n.begin(), n.end());

  if (n[0] == n[2] - 2){
    cout << 0 << endl;
  }
  else if (n[1] == n[2] - 2 || n[0] == n[1] - 2){
    cout << 1 << endl;
  }
  else{
    cout << 2 << endl;
  }
  
  cout << max(n[2] - n[1], n[1] - n[0]) - 1;
}
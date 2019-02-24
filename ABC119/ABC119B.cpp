#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;
  
  double x[N];
  string u[N];
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> u[i];
  }
  
  double ans = 0;
  for (int i = 0; i < N; i++) {
    if (u[i] == "JPY") {
      ans += x[i];
    } else if (u[i] == "BTC") {
      ans += x[i] * 380000.0;
    }
  }
  
  cout << ans << endl;
  
}
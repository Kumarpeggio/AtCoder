#include <bits/stdc++.h>
using namespace std;

int main () {
  
  int num = 5, ans = 0;
  int dish[num], time[num] = {};
  for (int i = 0; i < num; i++) {
    cin >> dish[i];
    while (1) {
      if (time[i] - dish[i] >= 0) {
        break;
      }
      time[i] += 10;
    }
    ans += time[i];
  }
  
  int x[num], y = 0;
  for (int i = 0; i < num; i++) {
    x[i] = time[i] - dish[i];
    y = max(y, x[i]);
  }
  
  ans -= y;
  
  cout << ans << endl;
  
}
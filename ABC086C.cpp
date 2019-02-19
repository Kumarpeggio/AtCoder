#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N;
  cin >> N;
  
  int t[N + 1], x[N + 1], y[N + 1];
  t[0] = 0; x[0] = 0; y[0] = 0;
  for (int i = 0; i < N; i++){
    cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
  }
  
  int dt, dx, dy;
  bool flag = true;
  for (int i = 0; i < N; i++) {
    dt = abs(t[i] - t[i + 1]);
    dx = abs(x[i] - x[i + 1]);
    dy = abs(y[i] - y[i + 1]);
    
    if (dt < dx + dy) {
      flag = false;
    }
    if (dt % 2 != (dx+dy) % 2) {
      flag = false;
    }
    
  }
  
  if (flag == true) {
    cout << "Yes" << endl;
  } else if(flag == false) {
    cout << "No" << endl;
  }
  
}
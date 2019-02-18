#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N, Y, x, y, z, flag = 0;
  
  cin >> N >> Y;
  
  for (x = 0; x <= N; x++) {
    
    if (10000 * x > Y) break;
    
    for (y = 0; y <= N - x; y++) {
      
      if (10000 * x + 5000 * y > Y) break;
      
      for (z = 0; z <= N - x - y; z++) {
        
        if (x + y + z == N && 10000 * x + 5000 * y + 1000 * z == Y) {
          flag = 1;
          break;
        }
        
      }
      
      if (flag == 1) break;
      
    }
    
    if (flag == 1) break;
    
  }
  
  if (flag == 1) {
    
    cout << x << " " << y << " " << z << endl;
    
  } else if (flag == 0) {
    
    cout << -1 << " " << -1 << " " << -1 << endl;
    
  }
  
}
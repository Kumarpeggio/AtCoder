#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int A, B, C, X, i, j, k, count;
  
  cin >> A >> B >> C >> X;
  
  for (i = 0; i <= A; i++) {
    for (j = 0; j <= B; j++) {
      for (k = 0; k <= C; k++) {
        
        if (500 * i + 100 * j + 50 * k == X) {
          
          count += 1;
          
        }
        
      }
    }
  }
  
  cout << count << endl;
  
}
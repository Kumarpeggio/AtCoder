#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N, A[200], i, count = 0, flag = 0;
  
  cin >> N;
  
  for (i = 0; i < N; i++) {
    
    cin >> A[i];
    
  }
  
  while (flag != 1) {
    
    for (i = 0; i < N; i++) {
      
      if (A[i] % 2 == 0) {
        
        A[i] = A[i] / 2;
        
      } else {
        
        flag = 1;
        
      }
      
    }
    
    count += 1;
    
  }
  
  cout << count - 1 << endl;
  
}
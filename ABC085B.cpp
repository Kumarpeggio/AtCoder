#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N, d[100], i, j, count = 1, x;
  
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> d[i];
  }
  
  for (i = 1; i < N; i++) {
    for (j = 0; j < i; j++) {
      
      if (d[j] < d[i]) {
        
        x = d[j];
        d[j] = d[i];
        d[i] = x;
        
      }
      
    }
  }
  
  for (i = 1; i < N; i++) {
    
    if (d[i] < d[i - 1]) {
      
      count += 1;
      
    }
    
  }
  
  cout << count << endl;
  
}
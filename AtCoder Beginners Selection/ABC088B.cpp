#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N, a[100], i, j, x, Alice = 0, Bob = 0;
  
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> a[i];
  }
  
  for (i = 1; i < N; i++) {
    for (j = 0; j < i; j++)  {
      
      if (a[j] < a[i]) {
        
        x = a[j];
        a[j] = a[i];
        a[i] = x;
        
      }
      
    }
  }
  
  for (i = 0; i < N; i++) {
    
    if (i % 2 == 0) {
      Alice += a[i];
    } else if (i % 2 == 1) {
      Bob += a[i];
    }
    
  }
  
  cout << Alice - Bob << endl;
  

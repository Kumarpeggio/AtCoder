#include <bits/stdc++.h>
using namespace std;

int main () {
  
  int A, B, C;
  cin >> A >> B >> C;
  
  int count = 0;
  int i;
  
  for (i = 0; i < C; i++) {
    
    B -= A;
    if (B < 0) break;
    
  }
  
  cout << i << endl;
  
}
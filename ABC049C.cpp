#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  string S;
  int i, j;
  
  cin >> S;
  
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());
  
  bool flag2 = true;
  
  for (i = 0; i < S.size();) {
    
    bool flag1 = false;
    
    for (j = 0; j < 4; j++) {
      if (S.substr(i, divide[j].size()) == divide[j]) {
        
        flag1 = true;
        i += divide[j].size();
        
      }
    }
    
    if (flag1 == false) {
      
      flag2 = false;
      break;
      
    }
    
  }
  
  if (flag2 == true) {
    cout << "YES" << endl;
  } else if (flag2 == false) {
    cout << "NO" << endl;
  }
  
}
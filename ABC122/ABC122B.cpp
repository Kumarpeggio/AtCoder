#include <bits/stdc++.h>
using namespace std;

int main () {
  
  string ACGT = "ACGT";
  string S;
  cin >> S;
  
  int ans = 0;
  for (int i = 0; i < S.size(); i++) {
    
    int count = 0;
    for (int j = i; j < S.size(); j++) {
      
      bool flag = false;
      for (int k = 0; k < ACGT.size(); k++) {
        if (S[j] == ACGT[k]) {
          flag = true;
        }
      }
      if (flag == true) {
        count++;
        ans = max(ans, count);
      } else {
        break;
      }
      
    }
    
  }
  
  cout << ans << endl;
  
}
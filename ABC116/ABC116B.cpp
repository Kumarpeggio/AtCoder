#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int s;
  cin >> s;
  
  int a[3] = {};
  a[0] = s;
  int count = 4;
  int flag = 0;
  
  if (a[0] == 1 || a[0] == 2) {
    flag = 1;
  }
    
  while (flag == 0) {
    for (int i = 0; i < 3; i++) {
      if(a[i] % 2 == 0) {
        a[i + 1] = a[i] / 2;
      } else {
        a[i + 1] = 3 * a[i] + 1;
      }
    }
    
    if (a[0] == 4) {
      flag = 1;
    } else {
      a[0] = a[1];
      count += 1;
    }
  }
  
  
  cout << count << endl;
  
}
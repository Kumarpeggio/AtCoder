#include <bits/stdc++.h>
using namespace std;
 
int main () {
  
  string S;
  cin >> S;

  int a, b;

  for (int i = 0; i < S.length(); i++) {
      if (i % 2 == 0) {
          if (S[i] != '0') {
              a++;
          }
      } else {
          if (S[i] != '1') {
              a++;
          }
      }
  }

  for (int i = 0; i < S.length(); i++) {
      if (i % 2 == 0) {
          if (S[i] != '1') {
              b++;
          }
      } else {
          if (S[i] != '0') {
              b++;
          }
      }
  }

  cout << min(a, b) << endl;
  
}
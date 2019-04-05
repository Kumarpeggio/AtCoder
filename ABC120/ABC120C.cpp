#include <bits/stdc++.h>
using namespace std;

int main () {
  
  string S;
  cin >> S;
  
  int a = 0, b = 0;
  
  for (int i = 0; i < S.length(); i++){
    if (S[i] == '0') {
      a++;
    } else if (S[i] == '1') {
      b++;
    }
  }
  
  cout << min(a, b) * 2 << endl;
  
}
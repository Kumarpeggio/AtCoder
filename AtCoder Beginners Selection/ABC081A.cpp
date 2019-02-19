#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int s, a, b, c, d;
  
  cin >> s;
  
  a = s / 100;
  b = s % 100;
  c = b / 10;
  d = b % 10;
  
  cout << a + c + d << endl;
  
}
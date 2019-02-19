#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N, A, B, i, total = 0, sum = 0, a, b, c, d, e;
  
  cin >> N >> A >> B;
  
  for (i = 1; i <= N ; i++) {
    
    a = i / 10000;
    b = (i - a * 10000) / 1000;
    c = (i - a * 10000 - b * 1000) / 100;
    d = (i - a * 10000 - b * 1000 - c * 100) / 10;
    e = i - a * 10000 - b * 1000 - c * 100 - d * 10;
    
    sum = a + b + c + d + e;
    
    if (sum >= A && sum <= B) {
      
      total += i;
      
    }
    
  }
  
  cout << total << endl;
  
}
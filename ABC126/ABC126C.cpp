#include <bits/stdc++.h>
using namespace std;
 
int main () {
  
  int N, K;
  cin >> N >> K;
  int count = 0;
  double a = 1;
  double ans = 0;
  
  for (int i = 1; i <= N; i++) {
    int j = i;
    while (j <= K - 1) {
      j = j * 2;
      count++;
    }
    for (int l = 1; l <= count; l++) {
      a /= 2;
    }
    ans = ans + a / N;
    count = 0;
    a = 1;
  }
  
  cout << setprecision(13) << ans << endl;
  
}

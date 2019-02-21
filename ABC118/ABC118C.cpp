#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b){
  
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
  
}
 
int main() {

  int N;
  cin >> N;
  
  int A[N] = {};
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  int ans = A[0];
  for (int i = 1; i < N; i++) {
    ans = gcd (ans, A[i]);
  }
  
  cout << ans << endl;
  
}
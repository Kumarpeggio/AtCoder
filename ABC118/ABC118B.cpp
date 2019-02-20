#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N, M;
  cin >> N >> M;
  
  int K, i, j, A, num[M] = {};
  for (i = 0; i < N; i++) {
    cin >> K;
    for (j = 0; j < K; j++) {
      cin >> A;
      num[A - 1] += 1;
    }
  }
  
  int ans = 0;
  for (i = 0; i < M; i++) {
    if (num[i] == N) {
      ans += 1;
    }
  }
  
  cout << ans << endl;
  
  
}
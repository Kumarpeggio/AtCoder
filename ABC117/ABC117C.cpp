#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N, M;
  cin >> N >> M;
  
  int X[M] ={};
  for (int i = 0; i < M; i++) {
    cin >> X[i];
  }
  sort(X, X + M);
  
  int L[M - 1] = {};
  for (int i = 0; i < M - 1; i++) {
    L[i] = X[i + 1] - X[i];
  }
  sort(L, L + M - 1);
  
  int count = 0;
  for (int i = 0; i < M - N; i++) {
    count += L[i];
  }
  
  cout << count << endl;
  
}
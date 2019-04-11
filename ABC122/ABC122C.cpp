#include <bits/stdc++.h>
using namespace std;

int main () {
  
  int N, Q;
  cin >> N >> Q;
  
  char S[N];
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }
  
  int count[N];
  count[N] = 0;
  
  for (int i = 1; i < N; i++) {
    if (S[i - 1] == 'A' && S[i] == 'C') {
      count[i] = count[i - 1] + 1;
    } else {
      count[i] = count[i - 1];
    }
  }
  
  int l, r;
  for (int i = 0; i < Q; i++) {
    cin >> l >> r;
    cout << count[r - 1] - count[l - 1] << endl;
  }
  
}
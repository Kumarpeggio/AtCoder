#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N;
  cin >> N;
  
  int L[N] = {};
  int max = 0, l = 0, total = 0;
  for (int i = 0; i < N; i++) {
    cin >> L[i];
    if (max < L[i]) {
      max = L[i];
    }
    total += L[i];
  }
  
  total = total - max;
  
  if (max < total) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}
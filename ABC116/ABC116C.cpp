#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N;
  cin >> N;
  
  int h[N + 1] = {};
  for (int i = 0; i < N; i++) {
    cin >> h[i];
  }
  
  int maxh = 0;
  for (int i = 0; i < N; i++) {
    maxh = max(maxh, h[i]);
  }
  
  int count;
  for (int i = 1; i <= maxh; i++) {
    for (int j = 0; j < N; j++) {
      if (h[j] >= i && h[j + 1] < i) {
        count += 1;
      }
    }
  }
  
  cout << count << endl;
  
}
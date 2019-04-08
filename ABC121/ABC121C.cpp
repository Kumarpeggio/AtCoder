#include <bits/stdc++.h>
using namespace std;

int main () {
  
  int N, M;
  cin >> N >> M;
  
  vector<pair<int, int>> P(N);
  int A, B;
  for (int i = 0; i < N; i++) {
    cin >> A >> B;
    P[i] = make_pair(A, B);
  }
  
  sort(P.begin(), P.end());
  
  long long ans = 0;
  
  for (int i = 0; i < N; i++) {
    int buy = min(M, P[i].second);
    ans += P[i].first * (long long)buy;
    M -= buy;
  }
  
  cout << ans << endl;
  
}
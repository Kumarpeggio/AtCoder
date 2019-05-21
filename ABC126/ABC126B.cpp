#include <bits/stdc++.h>
using namespace std;
 
int main () {
  
  int S;
  cin >> S;
  int AA, BB;
  
  BB = S % 100;
  AA = S - BB;
  
  string ans;
  
  if (AA >= 100 && BB >= 1) {
    if (AA <= 1200 && BB <= 12) {
      ans = "AMBIGUOUS";
    } else if (AA <= 1200) {
      ans = "MMYY";
    } else if (BB <= 12) {
      ans = "YYMM";
    } else {
      ans = "NA";
    }
  } else {
    ans = "NA";
  }
  
  cout << ans << endl;
  
}

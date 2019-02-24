#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S;
  cin >> S;
  
  string year, month, day;
  year = S.substr(0, 4);
  month = S.substr(5, 2);
  day = S.substr(7, 2);
  
  if (stoi(year) < 2019) {
    cout << "Heisei" << endl;
  } else if (stoi(year) == 2019) {
    if (stoi(month) <= 4) {
      cout << "Heisei" << endl;
    } else {
      cout << "TBD" << endl;
    }
  } else {
    cout << "TBD" << endl;
  }
  
}
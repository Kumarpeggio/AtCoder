#include <bits/stdc++.h>
using namespace std;
 
int main () {
 
    int A, B, C;
    cin >> A >> B >> C;
 
    if (A < B && A < C && C < B) {
        cout << "Yes" << endl;
    } else if (B < A && B < C && C < A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
 
}
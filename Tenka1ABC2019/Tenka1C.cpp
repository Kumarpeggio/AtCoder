#include <bits/stdc++.h>
using namespace std;
 
int main () {
 
    int N;
    string S;
    cin >> N >> S;

    int white = 0, black = 0;
    for (int i = 0; i < N; i ++) {
        if (S[i] == '.') {
            white++;
        }
    }
 
    int ans = white;
    for (int i = 0; i < N; i ++) {
        if (S[i] == '#') {
            black++;
        } else {
            white--;
        }

        if (ans > black + white) {
            ans = black + white;
        }
    }
    
    cout << ans << endl;

}
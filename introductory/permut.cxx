#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; i+=2)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 1) cout << "1";
    else if (n < 4) cout << "NO SOLUTION";
    else {
        REP(i, 2, n){
            cout << i << ' ';
        }
        REP(i, 1, n){
        cout << i << ' ';
        }
    }
}

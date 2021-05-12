#include <bits/stdc++.h>
using namespace std;
#define sq(n) (n)*(n)

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    unsigned long t, y, x, n;
    cin >> t;
    while (t--){
        cin >> y >> x;
        n = max(y, x);
        cout << ((y == n)? (n%2)? sq(n-1) + x : sq(n) + 1 - x : (n%2)? sq(n) + 1 - y : sq(n-1) + y) << '\n';
    }
}

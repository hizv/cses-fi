#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; long a, b, x, y;
    cin >> t;
    while (t--){
        cin >> a >> b;
        x = (2*a-b); y = (2*b-a);
        if (x<0 || y<0) cout << "NO\n";
        else {
            x/=3; y/=3;
            cout << ((a == (2*x+y) && b == (x+2*y))? "YES": "NO") << '\n';
        }
        // cout << (!(a ^ b)? ((a%3 == 0 || b%3 == 0)? "YES":"NO"): "NO")<< '\n';
    }
}

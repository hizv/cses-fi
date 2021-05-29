#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    long m, n;
    cin >> n;
    vector<bool> v(n);
    m = n*(n+1)/2;
    if (m % 2) cout << "NO";
    else {
        cout << "YES\n";
        m /= 2;
        if (m % 2 == 0) {
            cout << n/2 << '\n';
            REP(i, 1, n/4) cout << i << ' ';
            REP(i, 3*n/4 + 1, n) cout << i << ' ';
            cout << '\n' << n-n/2 << '\n';
            REP(i, n/4 + 1, 3*n/4) cout << i << ' ';
        }
        else {
            int k = 0;
            for(int i = n; i >= 1; i--){
                if (i <= m){
                    v[i-1] = 1;
                    m-=i;
                    k++;
                }
            }
            cout << k << '\n';
            REP(i, 1, n)
                if (v[i-1]) cout << i << ' ';
            cout << '\n' << n-k << '\n';
            REP(i, 1, n)
                if (!v[i-1]) cout << i << ' ';
        }
    }
}

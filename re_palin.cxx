#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for(int i = a; i <= b; i++)

int main(){
    string s, a="", b; int C[27]={};
    cin >> s;
    sort(s.begin(), s.end());
    for (char c: s) C[c-64]++;

    REP(i, 1, 26) {
        if (C[i] % 2){
            if (C[0]){
                cout << "NO SOLUTION";
                return 0;
            }
            C[0] = i;
        }
    }

    REP(i, 1, 26)
        if (C[i])
            a += string(C[i]/2, 64+i);

    b = a;
    reverse(a.begin(), a.end());

    if (C[0]) b += (char)(64+C[0]);

    b += a;
    cout << b << '\n';
}

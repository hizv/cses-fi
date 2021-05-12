#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull n, count = 0;
    cin >> n;

    vector <ull> v(n);
    for (auto &it: v){
        cin >> it;
    }

    for (ull i = 0; i < n-1; i++){
        while (v[i] > v[i+1]){
            v[i+1]++;
            count++;
        }
    }

    cout << count;
}

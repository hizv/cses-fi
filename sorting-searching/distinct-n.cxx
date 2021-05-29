#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k=1;
    cin >> n;
    vector<int> v(n);
    while(n--) cin >> v[n];

    sort(v.begin(), v.end());

    for (auto i = ++v.begin(); i != v.end(); i++)
        if (*i != *(i-1)) k++;

    cout << k;
}

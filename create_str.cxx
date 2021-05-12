#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    set <string> sc;
    do {
        sc.insert(s);
    }
    while (std::next_permutation(s.begin(), s.end()));

    cout << sc.size() << '\n';
    for (auto x: sc) cout << x << '\n';
}

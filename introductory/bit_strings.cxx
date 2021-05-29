#include <iostream>
using namespace std;

int main(){
    int n, m = 1;
    cin >> n;
    for (int i = 1; i <= n; i++){
        m *= 2;
        m %= 1000000007;
    }
    cout << m;
}

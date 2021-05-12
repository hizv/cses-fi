#include <iostream>
using namespace std;

int main(){
    int n, s=0;
    cin >> n;
    while ((n=n/5) != 0) s+=n;
    cout << s;
}

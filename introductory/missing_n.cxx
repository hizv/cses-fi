#include <iostream>

using namespace std;

int main()
{
    int n, k, i = 0;
    cin >> n;

    long sum = (long)(0.5 * n * (n+1));

    while(cin >> k)
    {
        sum = sum - k;
        i++;
        if(i==n-1) break;
    }

    cout << sum;
}

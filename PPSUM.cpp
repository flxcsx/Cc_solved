#include <bits/stdc++.h>

using namespace std;

int ppsum(int n)
{
    int sum=0;
    while (n--)
    {
        sum = sum +n;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d,sum= 0;
        cin >> d >> n;
        while (d--)
            sum = ppsum(n);
        cout << n ;
    }
}
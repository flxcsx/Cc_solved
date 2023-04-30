#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, a, b, n;

    cin >> q;

    while (q--)
    {
        int x = 0;
        cin >> a >> b >> n;
        for (int i = 0; i < n; i++)
        {
            x = x + (pow(2, i) * b);
            cout << a + x << " ";
        }
        cout << endl;
    }
    return 0;
}
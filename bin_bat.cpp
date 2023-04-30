#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int c = 0;
        for (int i = n; i > 1; i = i / 2)
        {
            c++;
        }
        cout << (c * a) + ((c - 1) * b) << "\n";
    }
}
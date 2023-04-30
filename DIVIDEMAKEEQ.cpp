#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
yip:
    while (t--)
    {
        int n, s = 1000000001, c = 0;
        cin >> n;
        if (n < 2)
        {
            cout << "0\n";
            goto yip;
        }
        float v[n];

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> v[i];
            a = v[i];
            s = min(a, s);
        }
        for (int i = 0; i < n; i++)
        {
            float f = v[i] / s, g;
            int l = f;
            g = f - l;
            if (g != 0)
            {
                cout << n << "\n";
                goto yip;
            }
            else if (v[i] / s > 1)
            {
                c++;
            }
            else
            {
                continue;
            }
        }
        cout << c << "\n";
    }
}

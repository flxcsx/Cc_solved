/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, x, c = 1;
    cin >> n >> x;
    if ((x > n + 1) || (x < 0 && abs(x) >= n))
        cout << -1 << endl;
    else
    {
        if (x > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (c != x)
                {
                    cout << '+';
                    c++;
                    continue;
                }
                cout << '*';
            }
            cout << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (c != x)
                {
                    cout << '-';
                    c--;
                    continue;
                }
                cout << '*';
            }
            cout << '\n';
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}
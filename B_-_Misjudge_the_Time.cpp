/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int h, m;
    cin >> h >> m;
    int a, b, c, d;
    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;
    if ((a * 10) + c <= 23 & (b * 10) + d <= 59)
    {
        cout << a << b << " " << c << d;
    }
    else
    {
        for (int i = 0; i < 24; i++)
        {
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    // cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}
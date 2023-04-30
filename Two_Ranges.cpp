/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    for (int i = 1; i < 9; i++)
    {
        if (((i >= a) & (i <= b)) || ((i >= c) & (i <= d)))
            count++;
    }
    cout << count << "\n";
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
/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

bool ch(int n, int m)
{
    if (n == m)
        return true;
    if ((n - m) % 2 == 0)
        return true;
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    if (ch(n, m))

        cout << "YES\n";
    else
        cout << "NO\n";
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
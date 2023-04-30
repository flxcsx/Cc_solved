/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 & (b == 2 | b == 3))
    {
        cout << "Yes";
        return;
    }
    else if (a == 2 & (b == 4 | b == 5))
    {
        cout << "Yes";
        return;
    }
    else if (a == 3 & (b == 6 | b == 7))
    {
        cout << "Yes";
        return;
    }
    else if (a == 4 & (b == 8 | b == 9))
    {
        cout << "Yes";
        return;
    }
    else if (a == 5 & (b == 10 | b == 11))
    {
        cout << "Yes";
        return;
    }
    else if (a == 6 & (b == 12 | b == 13))
    {
        cout << "Yes";
        return;
    }
    else if (a == 7 & (b == 14 | b == 15))
    {
        cout << "Yes";
        return;
    }
    else
    {
        cout << "No";
        return;
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
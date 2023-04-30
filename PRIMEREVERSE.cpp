/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, count = 0, seg = 0, l, r, i;
    cin >> n;
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] == a[i])
            count++;
        if (count == n)
        {
            cout << "yes\n";
            return;
        }
    }

    for (i = 0; i < n - 1, seg < 1;)
    {
        if (a[i] == b[i])
        {
            i++;
        }
        else
        {
            l = i;
            r = i;
            while (a[i] != b[i] && i < n - 1)
            {
                i++;
                r++;
            }
            sort(a + l, a + r + 1);
            seg++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] != a[i])
        {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
    return;
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
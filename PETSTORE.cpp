/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[t]++;
    }
    int g = 0;
    for (auto i : a)
    {
        if (i.second % 2 != 0)
        {
            g = 1;
            break;
        }
    }
    if (g == 0)
        cout << "yes\n";
    else
        cout << "no\n";
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
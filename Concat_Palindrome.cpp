/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    string s1, s2;
    int n, m;
    cin >> n >> m >> s1 >> s2;
    map<char, int> f;

    if (m > n)
    {
        swap(m, n);

        swap(s1, s2);
    }
    for (int i = 0; i < n; i++)
        f[s1[i]] += 1;

    for (int i = 0; i < m; i++)
        f[s2[i]] -= 1;
    int ch = 1, c = 0, diff = n - m;
    for (auto ele : f)
    {

        if (ele.second < 0)

        {

            ch = 0;

            break;
        }

        if (ele.second % 2 == 0)

        {

            continue;
        }

        if (c)

            ch = 0;
        else
            c = 1;
    }
    if (ch)
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
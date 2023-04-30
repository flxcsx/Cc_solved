/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            v.push_back(i);
        }
    }

    if (v.size() == 1)
    {
        cout << 0 << "\n";
        return;
    }

    if (v.size() == 0)
    {
        cout << n << "\n";
        return;
    }

    int count = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (s[v[i]] != s[v[i + 1]])
        {
            int an = v[i + 1] - v[i] - 1;
            if (an % 2 != 0)
            {
                count += 1;
            }
        }
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
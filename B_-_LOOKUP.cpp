/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    string s, t;
    cin >> s >> t;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[j])
        {
            j++;
            if (j == t.size())
            {
                cout << "Yes";
                return;
            }
        }
        else
        {
            j = 0;
        }
    }
    cout << "No";
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
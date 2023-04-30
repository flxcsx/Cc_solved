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
    string s;
    cin >> s;
    string s2 = s;
    reverse(s.begin(), s.end());
    vector<vector<int>> mp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s2[i - 1] == s[j - 1])
                mp[i][j] = 1 + mp[i - 1][j - 1];
            else
                mp[i][j] = max(mp[i - 1][j], mp[i][j - 1]);
        }
    }
    cout << mp[n][n] / 2 << "\n";
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
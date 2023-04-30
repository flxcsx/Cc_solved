/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p(m);
    for (int i = 0; i < m; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    vector<vector<int>> vec(n + 1);
    for (int i = 0; i < m; i++)
    {
        vec[p[i].first].push_back(p[i].second);
        vec[p[i].second].push_back(p[i].first);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << vec[i].size() << " ";
        sort(vec[i].begin(), vec[i].end());
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
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
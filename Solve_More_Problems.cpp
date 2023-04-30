/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

bool cmp(vector<int> &a, vector<int> &b)
{
    if (a[0] + a[1] == b[0] + b[1])
    {
        return a[0] < b[0];
    }
    else
    {
        return a[0] + a[1] < b[0] + b[1];
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        m.push_back({a[i], b[i]});
    }
    sort(m.begin(), m.end(), cmp);

    // ll c = 0, t = 0,i=0;
    int maxi = 0;
    int sm = 0;
    int i = 0;
    while (i < n)
    {
        if (m[i][0] + m[i][1] + sm <= k)
        {
            sm += m[i][0] + m[i][1];
            maxi = max(maxi, m[i][1]);
            i++;
        }
        else
            break;
    }

    vector<int> mn(n);

    for (int k = n - 1; k >= 0; k--)
    {
        if (k == n - 1)
            mn[k] = m[k][0];
        else
            mn[k] = min(mn[k + 1], m[k][0]);
    }
    int an = i;
    if (i < n)
    {
        int rem = k - sm;
        if (mn[i] <= rem)
            an++;
        else if (rem + maxi >= m[i][0] + m[i][1])
        {
            an++;
        }
    }
    cout << an << "\n";
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
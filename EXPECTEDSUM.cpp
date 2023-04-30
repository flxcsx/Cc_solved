/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a, b, ans = inf;
    cin >> a >> b;
    string s;
    cin >> s;
    vector<int> q(a);
    int c = 0;
    for (int i = 1; i < a; i++)
    {
        if (s[i - 1] != s[i])
        {
            c++;
            q[i] = c;
        }
        else
            q[i] = c;
    }
    q[0] = 0;
    for (int i = a - 1; i >= 0; i--)
    {
        if ((i - (b - 1)) < 0)
            break;
        int f = q[i] - q[i - b + 1];
        if (s[i] == '0')
            f++;
        ans = min(ans, f);
    }
    cout << ans << "\n";
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
/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

int solve()
{
    int k, n, c = 0, ans = INT_MAX;

    cin >> n >> k;
    string s;
    cin >> s;
    int a[n];
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            c++;
            a[i] = c;
        }
        else
            a[i] = c;
    }
    a[0] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if ((i - (k - 1)) < 0)
            break;
        int f = a[i] - a[i - (k - 1)];
        if (s[i] == '0')
            f++;
        ans = min(ans, f);
    }

    return ans;
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        cout << solve() << "\n";
    }
    return 0;
}
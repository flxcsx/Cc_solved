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

    ll count = 0;
    vector<ll> sum;
    for (int i = 0; i < n; i++)
    {
        ll j = i;
        ll temp = 0;
        while (j < n & s[j] == '1')
        {
            temp++;
            j++;
        }
        sum.push_back(temp);
        count = max(count, temp);
        i = j;
    }
    count = sum[0];
    ll mx = 0;
    for (int i = 1; i < sum.size(); i++)
    {
        mx = max(mx, sum[i]);
    }
    cout << count + mx << "\n";
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
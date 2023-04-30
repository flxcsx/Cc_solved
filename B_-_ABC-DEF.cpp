/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

const int mod = 998244353;

void solve()
{
    unsigned ll a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    x = ((a % mod) * (b % mod)) % mod;
    x = (x * (c % mod)) % mod;
    y = ((d % mod) * (e % mod)) % mod;
    y = (y * (f % mod)) % mod;

    cout << (x + 998244353 - y) % 998244353;
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
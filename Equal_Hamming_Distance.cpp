/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

int mul(int a, int b) { return ((a % mod) * (b % mod)) % mod; }

int binpow(int a, int b)
{
    if (b == 0)
        return 1;
    int tmp = binpow(a, b / 2);
    tmp = mul(tmp, tmp);
    if (b % 2)
        return mul(tmp, a);
    return tmp;
}
int mod_inverse(int a, int m = mod) { return binpow(a, m - 2); }
const int sz = 2e5 + 1;
int fact[sz], invfact[sz];
void precompute()
{
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < sz; i++)
    {
        fact[i] = mul(fact[i - 1], i);
        invfact[i] = mul(invfact[i - 1], mod_inverse(i));
    }
}
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            count++;
    }
    if ((n - count) % 2)
    {
        cout << 0 << "\n";
        return;
    }
    n -= count;
    int ans = binpow(2, count);
    ans = mul(ans, mul(fact[n], mul(invfact[n / 2], invfact[n / 2])));
    cout << ans << "\n";
}

signed main()
{
    precompute();
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}
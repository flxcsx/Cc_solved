/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

bool is_prime(int n)
{
    // Check if n is a prime number
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool can_make_equal(int n, string a, string b)
{
    // Check if we can make string a equal to string b by reversing
    // substrings of length n
    for (int i = 0; i <= a.length() - n; i++)
    {
        if (a.substr(i, n) == b.substr(i, n))
            return true;
    }
    return false;
}

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    if (a == b)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i) && can_make_equal(i, a, b))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
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
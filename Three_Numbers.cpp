/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int di1 = abs(a - b), di2 = abs(a - c), di3 = abs(b - c);
    if (di1 % 2 == 1 || di2 % 2 == 1 || di3 % 2 == 1)
        cout << -1 << endl;
    else
    {
        int ans = 0;
        while (1)
        {
            if (a == b && b == c)
                break;
            if (a >= b && a >= c)
            {
                int di1 = a - b;
                int di2 = a - c;
                int dif = min(di1, di2);
                if (dif == 0)
                    dif = max(di1, di2);
                ans += dif / 2;
                a -= dif / 2;

                b += dif / 2;
                c += dif / 2;
            }
            else if (b >= a && b >= c)
            {
                int di1 = b - a;
                int di2 = b - c;
                int dif = min(di1, di2);
                if (dif == 0)
                    dif = max(di1, di2);
                ans += dif / 2;
                a += dif / 2;
                b -= dif / 2;
                c += dif / 2;
            }
            else if (c >= a && c >= b)
            {
                int di1 = c - b;
                int di2 = c - a;
                int dif = min(di1, di2);
                if (dif == 0)
                    dif = max(di1, di2);
                ans += dif / 2;
                a += dif / 2;
                b += dif / 2;
                c -= dif / 2;
            }
        }
        cout << ans << "\n";
    }
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
/* ALTXT */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << ' ' << 3 << ' ' << 4 << ' ' << 5 << "\n";
        return;
    }
    int an[4] = {};
    an[0] = an[1] = an[2] = n;
    int j = 0;
    for (int i = 0; i < 60; i++)
    {
        if (!(n & (1ll << i)))
        {
            an[j] += (1ll << i);
            if (j == 2)
                an[3] += (1ll << i);
            j++;
            j %= 3;
        }
    }
    for (int abc = 0; abc < 4; abc++)
    {
        assert(an[abc] != 0);
        for (int j = abc + 1; j < 4; j++)
            assert(an[abc] != an[j]);
    }
    int val = ((an[0] & an[1]) | an[2]) ^ an[3];
    assert(val == n);
    if (an[3] == 0)
        cout << -1 << "\n";
    else
    {
        for (auto i : an)
            cout << i << ' ';
        cout << "\n";
    }
}

int32_t main()
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
/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    string st;
    cin >> n >> st;
    vector<int> an;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
        {
            an.push_back(i);
        }
    }
    bool flag = false;
    int temp = an[an.size() - 1];
    for (int i = 0; i < an.size(); i++)
    {
        if ((temp - an[i]) % 2 == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "1\n";
    }
    else
    {
        cout << "2\n";
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
/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

// #define int long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int arr[n + 1]{};
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<int, int> f;
    int x = 0, c = 0;
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > n)
        {
            c = n + 1;
            break;
        }
        if (arr[a[i]] == 0)
        {
            x++;
            f[a[i]] = x;
            arr[a[i]] = a[i] - 1;
            c += a[i];
            ans.push_back(x);
        }
        else
        {
            ans.push_back(f[a[i]]);
            arr[a[i]]--;
        }
    }
    if (c != n)
    {
        cout << -1 << "\n";
    }
    else
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
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
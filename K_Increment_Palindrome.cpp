/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

int chk(int *arr, int n)
{
    int tmp = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
            tmp = 1;
    }
    return tmp;
}

void solve()
{
    int k, n;
    cin >> n >> k;
    // vector<int>a(n);
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (k % 2 != n % 2)
        cout << "Yes"
             << "\n";
    else if (k % 2 == 1)
    {
        if (k == n)
        {
            if (chk(arr, n) == 0)
                cout << "Yes"
                     << "\n";
            else
                cout << "No"
                     << "\n";
        }
        else
            cout << "Yes"
                 << "\n";
    }
    else
    {
        if (k == n)
        {
            if (chk(arr, n) == 0)
                cout << "Yes"
                     << "\n";
            else
                cout << "No"
                     << "\n";
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < n / 2; i++)
                ans += abs(arr[i] - arr[n - i - 1]);
            if (ans % 2 == 0)
                cout << "Yes"
                     << "\n";
            else
                cout << "No"
                     << "\n";
        }
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

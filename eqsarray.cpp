#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    vector<int> a;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        a.push_back(g);
    }
    if (n == 1)
    {
        if (a[0] == k)
        {
            cout << "yes\n";
            return;
        }
        else
        {
            cout << "no\n";
            return;
        }
    }

    for (int i = 0; i < (n - 1); i++)
    {
        if (a[i] == k)
        {
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
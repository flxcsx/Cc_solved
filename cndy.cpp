#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    int a;
    map<int, int> m;
    cin >> n;
    int o = 2 * n;
    for (int i = 0; i < o; i++)
    {
        cin >> a;
        m[a]++;
    }
    //map<int,int>::iterator it;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        int h = it->second;
        if (h > 2)
        {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
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
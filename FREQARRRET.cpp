/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, pair<int, int>> f;
        int nn = 1;
        vector<int> an;
        for (int i = 0; i < n; i++)
        {
            if (f.find(a[i]) != f.end())
            {
                if (f[a[i]].second > 0)
                {
                    an.push_back(f[a[i]].first);
                    f[a[i]].second--;
                    if (f[a[i]].second == 0)
                        f.erase(a[i]);
                }
            }
            else
            {
                f[a[i]] = {nn, a[i] - 1};
            }
            if (f[a[i]].second == 0)
                f.erase(a[i]);
            an.push_back(nn);
            nn++;
        }
        bool flag = 1;
        for (auto i : f)
        {
            if (i.second.second > 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << -1;
        else
        {
            for (auto i : an)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

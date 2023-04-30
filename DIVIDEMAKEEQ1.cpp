#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, mn = INT_MAX, c = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(v[i], mn);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] != mn)
        {
            if (v[i] % mn ==0)
            {
                c++;
            }
            else
            {
                cout << n << "\n";
                return;
            }
        }
        
    }
    cout << c <<"\n";
}

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }
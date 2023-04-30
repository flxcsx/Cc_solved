/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int i, j;
    int N;
    cin >> N;
    set<string> st;
    bool ok = true;

    string pat1 = "HDCS";
    string pat2 = "A23456789TJQK";
    for (i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        if (st.count(str) != 0)
            ok = false;
        st.insert(str);

        bool ok2 = false;
        for (j = 0; j < (int)pat1.size(); j++)
        {
            if (str[0] == pat1[j])
                ok2 = true;
        }
        if (!ok2)
            ok = false;

        ok2 = false;
        for (j = 0; j < (int)pat2.size(); j++)
        {
            if (str[1] == pat2[j])
                ok2 = true;
        }
        if (!ok2)
            ok = false;
    }

    if (ok)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    // cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            ans = max(a, ans);
        }
        cout << ans << endl;
    }
}
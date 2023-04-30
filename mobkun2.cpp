#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    int t;
    cin >> t;
yee:
    while (t--)
    {
        int n, m, k, x;
        cin >> n >> m >> k >> x;
        // int i;
        // while (i++)
        // {
            if (x % ((n * k) + m) == 0)
            {

                cout << "YES\n";
                goto yee;
            }
            else if (x % ((n * k) + m) - (n * (k - 1)) > 0)
            {
                cout << "YES\n";
                goto yee;
            }
            else
            {
                cout << "NO\n";
                goto yee;
            }
        //}
    }
}

#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n, m, k, x;
//     cin >> n >> m >> k >> x;
//     int i;
//     while (i++)
//     {
//         if ((i % k) == 1)
//         {
//             x = x - (m + n);
//             if (x <= 1)
//             {
//                 cout << "YES\n";
//                 return;
//             }
//         }
//         else if ((i % k) != 1)
//         {
//             x = x - n;
//             if (x <= 1)
//             {
//                 cout << "NO\n";
//                 return;
//             }
//         }
//     }
// }

int main()
{
    int t;
    cin >> t;
yee:
    while (t--)
    {
        // solve();
        int n, m, k, x;
        cin >> n >> m >> k >> x;
        int i;
        while (i++)
        {
            if ((i % k) == 1)
            {
                x = x - (m + n);
                if (x <= 1)
                {
                    cout << "YES\n";
                    goto yee;
                }
            }
            else if ((i % k) != 1)
            {
                x = x - n;
                if (x <= 1)
                {
                    cout << "NO\n";
                    goto yee;
                }
            }
        }
    }
}

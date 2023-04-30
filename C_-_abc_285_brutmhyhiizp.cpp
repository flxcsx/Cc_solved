#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                cout << j - 1 << "\n";
                break;
            }
            if (s[j - 1] == s[j + i - 1])
            {
                cout << j - 1 << "\n";
                break;
            }
        }
    }
    return 0;
}

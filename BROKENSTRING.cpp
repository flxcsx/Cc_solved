#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
yip:
    while (t--)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;
        int m = n / 2;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == s[i + m])
            {
                continue;
            }
            else if (s[i] != s[i + m])
            {
                std::cout << "NO\n";
                goto yip;
            }
        }
       std:: cout << "YES\n";
    }
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, m, count = 0;
        cin >> m;
        string s;
        cin >> s;
        for (int i = 0; i < m; i++)
        {

            if (s[i] == s[i + 1])
                count++;

        }
        cout << count << "\n";
    }
    return 0;
}

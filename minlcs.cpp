#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 0, j = 0, c = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
                c++;
            }
        }
    }
    return 0;
}

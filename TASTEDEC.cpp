#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        //x = 2x;
        //y = 5y;
        if (2*x > 5*y)
            cout
                << "Chocolate\n";
        else if (2*x < 5*y)
            cout
                << "Candy\n";
        else
            cout << "Either\n";
    }
}
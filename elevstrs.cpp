#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, v1, v2;
        cin >> n >> v1 >> v2;
        double t1 = (n * sqrt(2)) / v1;
        double t2 = (2 * n) / v2;
        if (t1 < t2)
            cout << "Stairs\n";
        else
            cout << "Elevator\n";
    }
}

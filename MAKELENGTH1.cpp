#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        // int arr[200000];
        while (n--)
        {
            char c;
            cin >> c;
            v.push_back(c);
        
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] == v[i])
            {
                v.erase(v.begin() + i - 1);
                v[i] == 0;
                i--;
            }
            else
            {
                cout << "NO\n";
                break;
            }
            cout << "YES\n";
        }
    }
}
}
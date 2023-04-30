#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int>r;
        int h =3;
        while(h--){
            int temp;
            cin >> temp;
            r.push_back(temp);
        }

        sort(r.begin(), r.end());
        if ((r[0] + r[1]) < r[2])
        {
            cout << "Yes\n";
            //cout << r[0] << r[2] << r[3];
        }
        else
        {
            cout << "No\n";
            //cout << r[1] << r[2] << r[3];
        }
    }
    return 0;
}

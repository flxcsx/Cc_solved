#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k,n;
        cin >> k >> n;
        int x = k/n;
        cout << x*x << endl;
    }
    return 0;
}

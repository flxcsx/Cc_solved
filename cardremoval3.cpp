#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[10] = {},n;
        cin >> n;
        while(n--)
        {
            int a;
            cin >> a;
            arr[a] = arr[a]+1;
            
            
        }
        int max = arr[0];
            for(int i =1;i<10;i++)
            {
                if (arr[i] > max)
                max = arr[i];
            }
            cout << n-max;
    }
    return 0;
}
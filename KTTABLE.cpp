#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    while (n--)
    {
        cin >> t;
        int z = 0;
        int arr1[t + 1], arr2[t]; // arr1= {0, x1,x2,x3...}
        arr1[0] = 0;              // arr2= {y1,y2,y3}
        for (int x = 1; x <= t; x++)
        {
            cin >> arr1[x];
        }

        //  for (int x=0 ; x<=t ; x++) {
        //     cout<<arr1[x]<<endl;
        // }                            //to print arr1
        // cout<<"--------"<<endl;

        for (int y = 0; y < t; y++)
        {
            cin >> arr2[y];
        }

        // for(int y=0 ; y<t ; y++) {
        //     cout<<arr2[y]<<endl;     //to print arr2
        // }

        for (int a = 0, b = 0; a < t; a++, b++)
        {
            if (arr1[a + 1] - arr1[a] >= arr2[b])
            {
                z++;
            }
        }
        cout << z << endl;
    }

    return 0;
}

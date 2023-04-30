#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x,y,z;
        cin >> x >> y >> z;
        int box =0,n=0;
        while ( y > 0)
        {
         y -= z;
         n++;
        }
        box = n*x;
        cout << box << endl;
        
       // if(y/z > 0)
        //    int n = y/z;
        //else
       // int n = (y/z)+1;
       // int n = y/z;

    }
}
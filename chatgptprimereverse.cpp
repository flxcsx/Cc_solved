#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
    // Check if n is a prime number
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool can_make_equal(int n, string a, string b)
{
    // Check if we can make string a equal to string b by reversing
    // substrings of length n
    for (int i = 0; i <= a.length() - n; i++)
    {
        if (a.substr(i, n) == b.substr(i, n))
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;
        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (is_prime(i) && can_make_equal(i, a, b))
            {
                cout << "YES" << endl;
                break;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}

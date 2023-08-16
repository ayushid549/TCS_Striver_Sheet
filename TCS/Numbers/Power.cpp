#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;

    //    Approach 1: Iterative method
    // for(int i=1;i<=k;i++)
    // {
    //     ans = ans*n;
    // }

    // Approach 2 : Using Library Function

    // ans = pow(n,k);

    // Approach 3 : time complexity O(sqrt(n))

    while (k != 0)
    {
        if (k % 2 == 0)
        {
            n = n * n;
            k /= 2;
        }
        else
        {
            ans = ans * n;
            k--;
        }

        cout << ans << endl;

        return 0;
    }
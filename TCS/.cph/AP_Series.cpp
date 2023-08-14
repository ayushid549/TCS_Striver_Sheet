#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 2 , d = 4;
    // int sum = 0;

    // Approach 1 

    // for(int i=1;i<=n;i++)
    // {
    //     sum+=a;
    //     a+=d;
    // }
    // cout<<sum<<endl;

    // Approach 2 : Using Formula sum = n/2(2a + (n-1)d)

    float sum = (n / 2.0) * (2.0 * a + (n-1) * d);
    cout<<sum<<endl;

    return 0;
}
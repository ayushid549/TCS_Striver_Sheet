#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // int ans = 0;
    // Approach 1
    // for(int i=1;i<=n;i++)
    // {
    //     ans+=i;
    // }

    // Approach 2

    int ans = n*(n+1)/2;
    cout<<ans<<endl;

    return 0;
}
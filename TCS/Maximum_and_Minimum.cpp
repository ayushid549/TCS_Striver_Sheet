#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mini=INT_MAX,maxi=INT_MIN;
    
    while(n>0)
    {
        int digit = n%10;
        mini = min(mini,digit);
        maxi = max(maxi,digit);
        n/=10;
    }
    cout<<maxi<<" maximum number"<<endl;
    cout<<mini<<" minimun number"<<endl;

    return 0;
}

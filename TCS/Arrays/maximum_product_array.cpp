#include<bits/stdc++.h>
using namespace std;

int maximumProductSubarray(int n,int arr[])
{
    int pre = 0;
    int suff = 0;
    int ans = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(pre==0) pre=1;
        if(suff==0) suff=1;

        pre*=arr[i];
        suff*=arr[n-i-1];

        ans = max(ans,max(pre,suff));
    }

    cout<<ans;
}

int main()
{
    int n;
    cin>>n;
   int *arr = new int[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    maximumProductSubarray(n,arr);

    return 0;
}
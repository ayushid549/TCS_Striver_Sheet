#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
    return 0; 
    if(n==1)
    return 1;

    return fibonacci(n-1) + fibonacci(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    // int first = 0;
    // int second = 1;
    // cout<<first<<" "<<second<<" ";
    // for(int i=2;i<=n;i++)
    // {
    //     int next = first + second;
    //     cout<<next<<" ";
    //     second = next;
    //     first = second;

    cout<<fibonacci(n)<<endl;

    return 0;
}
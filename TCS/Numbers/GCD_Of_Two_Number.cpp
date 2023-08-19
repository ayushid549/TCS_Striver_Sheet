#include<bits/stdc++.h>
using namespace std;

int gcd_of_number(int num1,int num2)
{
    int ans=1;
    //  Approach 1 : TC = O(n)
    // for(int i=1;i<=min(num1,num2);i++)
    // {
    //     if(num1%i==0 && num2%i==0)
    //     {
    //         ans = i;
    //     }
    // } 
    // cout<<ans<<endl;   

    // Approach 2 : TC = O(log(num1,num2))
    
    if(num2==0)
       return num1;
    
    return gcd_of_number(num2 , num1 % num2);
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int ans = 1;

    cout<<gcd_of_number(num1,num2);

    return 0;
}
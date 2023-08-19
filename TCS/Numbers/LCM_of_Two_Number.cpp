#include<bits/stdc++.h>
using namespace std;

int findgcd(int num1,int num2)
{
    int ans = 1;
    for(int i=1;i<=min(num1,num2);i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    
    int gcd = findgcd(num1,num2);
    int lcm = num1*num2/gcd;
    
    cout<<lcm<<endl;

    return 0;
}
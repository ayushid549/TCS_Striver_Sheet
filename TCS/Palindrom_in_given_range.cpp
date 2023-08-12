#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(int num)
{
    int original = num;
    int reverse=0;
    while(num>0)
    {
        int rem = num%10;
        reverse = reverse*10+rem;
        num/=10;
    }
    if(original==reverse)
    return true;
    else
    return false;
}

int main()
{
    int mini;
    cin>>mini;
    int maxi;
    cin>>maxi;
   
    for(int i=mini;i<=maxi;i++)
    {
        if(isPalindrom(i))
        cout<<i<<" ";
    }
    
    return 0;
}


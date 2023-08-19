#include<bits/stdc++.h>
using namespace std;

void Prime_Factors(int num)
{
    for(int i=2;num>1;i++)
    {
        if(num%i==0)
        {
            while(num%i==0)
            {
                cout<<i<<" ";
                num/=i;
            }
        }
    }
}

int main()
{
    int num;
    cin>>num;

    Prime_Factors(num);

    return 0;
}
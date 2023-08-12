#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int temp = n;
    int power = 0;

    while(temp!=0)
    {
        power++;
        temp=temp/10;
    }
    // cout<<power<<endl;
    temp = n;

    int sumOfPower = 0;
    
    while(n!=0)
    {
        int rem = n%10;
        sumOfPower += pow(rem,power);
        n/=10;
    }
   
    if(sumOfPower==original)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cin>>num;

    if(isArmstrong(num))
    {
        cout<<"yes..Number is Armstrong"<<endl;
    }
    else
    {
        cout<<"No..Not a Armstrong Number"<<endl;
    }

return 0;
}
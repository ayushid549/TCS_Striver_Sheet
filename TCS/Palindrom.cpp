#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    //Approach 1
    // string num = to_string(n);
    // reverse(num.begin(),num.end());
    // int reverse = stoi(num);
    // if(n==reverse)
    // cout<<"Number is Palindrom"<<endl;
    // else
    // cout<<"Number is Not Palindrom"<<endl;

    //Approach 2
     int original = n;
     int reverse = 0;
     while(n>0)
     {
        int rem = n%10;
        reverse = reverse*10+rem;
        n/=10;
     }
     if(reverse==original)
     cout<<"Palindrom"<<endl;
     else
     cout<<"Not Palindrom"<<endl;

    return 0;
}

// Time Complexity is O(logn);
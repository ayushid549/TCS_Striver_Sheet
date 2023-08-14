#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   
//Approach 1 
    if(n>0)
    cout<<"Positive Number"<<endl;
    else if(n<0)
    cout<<"Negative Number"<<endl;
    else
    cout<<"Neither Positive nor Negative"<<endl;

// Approach 2
    if(n >> 31 == 0)
    cout<<"Positive Number"<<endl;
    else
    cout<<"Negative Number"<<endl;
   
    return 0;
}

/*For eg:  a = 5 ,  b = -6

a = 0000 0000 0000 0000 0000 0000 0000 0101 = 5

b = 1111 1111 1111 1111 1111 1111 1111 1010 = -6

a>>31 

a= 0000 0000 0000 0000 0000 0000 0000 0000 = 0

b>>31

b= 1111 1111 1111 1111 1111 1111 1111 1111 = -1*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;//first term of GP
    int r = 1.5;//Common ratio
    int n = 4;//Number of terms in GP

    float sum = 0;
    
    // Approach 1 : TC:O(n)

    // for(int i=1;i<=n;i++)
    // {
    //     sum = sum + a;
    //     a = a * r;
    // }  
    // cout<<sum<<endl;

    // Approach 2 : direct using formula : a(r^n-1)/(r-1) TC:O(1)
    sum = a*(pow(r,n)-1)/(r-1);
    cout<<sum<<endl;
   
    return 0;
}


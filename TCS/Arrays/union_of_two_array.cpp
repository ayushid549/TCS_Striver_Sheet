#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1,1,2,3,5};
    int arr2[] = {1,2,2,3,4};

    int i=0,j=0;
    set<int> s;
    while(i<5 && j<5)
    {
        s.insert(arr1[i]);
        s.insert(arr2[j]);
        i++,j++; 
    }

    for(auto i : s)
    {
        cout<<i<<" ";
    }

    return 0;
}
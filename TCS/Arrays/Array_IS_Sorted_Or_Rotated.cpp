#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[5] = {3,4,5,1,2};
    int arr[4] = {2,1,3,4};

    int count = 0;

    for(int i=1;i<5;i++)
    {
        if(arr[i-1] > arr[i])
           count++;
    }

    if(arr[5-1]>arr[0])
       count++;

    if(count<=1)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;

    return 0;
}
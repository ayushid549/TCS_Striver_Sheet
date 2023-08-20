#include<bits/stdc++.h>
using namespace std;

void rotate_array(int size,int arr[],int k)
{
    int temp[size];

    for(int i=0;i<size;i++)
    {
        int ind = (i+k)%size;
        temp[ind] = arr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout<<temp[i]<<" ";
    }
}

int main()
{
    int size;
    cin>>size;
    int k;
    cin>>k;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    rotate_array(size,arr,k);

    return 0;
}
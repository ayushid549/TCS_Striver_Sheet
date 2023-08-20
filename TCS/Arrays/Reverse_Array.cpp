#include<bits/stdc++.h>
using namespace std;

int Reverse_Array(int size , int arr[])
{
    int start = 0 , end = size - 1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    Reverse_Array(size,arr);

    return 0;
}
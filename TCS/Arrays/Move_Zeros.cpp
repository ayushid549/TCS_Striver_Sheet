#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {2 ,0, 0, 11 , 3, 0 ,5};
    
    
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]==0 && arr[j]!=0)
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void Quick_Sort(int arr[],int start,int end)
{
   if(start<end)
   {
      int pindex = partition(arr,start,end);
      Quick_Sort(arr,start,pindex);
      Quick_Sort(arr,pindex+1,end);
   }
}

int partition(int arr[],int start,int end)
{
    int pivot = arr[start];
    int i=start;
    int j=end;

    while(i<j)
    {
        while(arr[i]<=pivot && i<=end-1)
           i++;
        while(arr[j]>pivot && j>=start+1)
           j--;

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[j]);
    return j;

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
    
    Quick_Sort(arr,0,size-1);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1,2,4,7,7,5};
    int small = INT_MAX,second_small = INT_MAX;
    int large = INT_MIN,second_large = INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<small)
        {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i]!=small)
        {
            second_small = arr[i];
        }
    }

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>large)
        {
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i]!=large)
        {
            second_large = arr[i];
        }
    }

    cout<<"second large element is : "<<second_large<<endl;
    cout<<"second small element is : "<<second_small<<endl;

    return 0;
}
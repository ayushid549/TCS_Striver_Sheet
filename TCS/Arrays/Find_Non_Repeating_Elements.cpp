#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    unordered_map<int,int> hashMap;

    for(auto i:nums)
       ++hashMap[i];
    
    for(auto pairInMap:hashMap) 
        if(pairInMap.second == 1) cout<<pairInMap.first<<" ";
}

int main() {
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}
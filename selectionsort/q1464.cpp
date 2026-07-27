#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxproduct(vector<int>& nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    return (nums[n-1]-1)*(nums[n-2]-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
int ans=maxproduct(nums);
cout<<ans;
    return 0;
}
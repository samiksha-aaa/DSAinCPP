#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
int mid=(left+right)/2;
if(nums[mid]==target){
    return mid;
} else if(target<nums[mid]){
  right=mid-1;
} else{
    left=mid+1;
}
    } return -1;
}
int main(){
    int target;
cin >> target;
int n;
cout<<"enter n:"<<endl;
cin>>n;
 vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
int ans=binarysearch(nums,target);
cout<<ans;
return 0;
}
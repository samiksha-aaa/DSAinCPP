#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int>& nums,int target){
 int left=0;
 int right=nums.size()-1;
 int ans=-1;
 while(left<right){
    int mid=(left+right)/2;
    if(nums[mid]==target){
        ans=mid;
   right=mid-1;
    }
    if(target<nums[mid]){
        right=mid-1;
    }else{
        left=mid+1;
    } 
} return ans;
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
int ans=firstoccurence(nums,target);
cout<<ans;
    return 0;
}
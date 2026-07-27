#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missingnumber(vector<int>& nums){
  int left=0;
  int right=nums.size()-1;
int ans=-1;
  while(left<right){
    int mid=(left+right)/2;
if(nums[mid]==mid){
left=mid+1;
} else{
    ans=mid;
    right=mid-1;
} 
  } return ans;
}
int getmissingnumber(vector<int>& nums){
sort(nums.begin(),nums.end());
int ans=missingnumber(nums);
return ans;
}
int main(){
    int n;
cout<<"enter n:"<<endl;
cin>>n;
int ans=getmissingnumber(n);
cout<<ans;
    return 0;
}
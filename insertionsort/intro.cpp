#include<iostream>
#include<vector>
using namespace std;
vector<int> intro(vector<int>& nums){
    int n=nums.size();
    for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
         nums[j+1]=nums[j];
         j--;
        } nums[j+1]=key;
    } return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
     for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans=intro(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }

    return 0;
}
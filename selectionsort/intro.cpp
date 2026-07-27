#include<iostream>
#include<vector>
using namespace std;
 vector<int> sortArray(vector<int>& nums) {
         int n=nums.size();
         for(int i=0;i<n-1;i++){
            int minindex=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[minindex]){
                  minindex=j;
                }
            } swap(nums[i],nums[minindex]);
         } return nums;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
     for(int i=0;i<n;i++){
        cin>>nums[i];
     }
     vector<int> ans=sortArray(nums);
     for(int i=0;i<n;i++){
        cout<<nums[i]<<"  ";
     }
    return 0;
}
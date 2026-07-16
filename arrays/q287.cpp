#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int duplicatenumber(vector<int>& nums){
int n=nums.size();
int ans;
sort(nums.begin(),nums.end());
for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            ans=nums[i];
        }
    }
    return ans;
}
int main(){
    vector<int> nums;
    int n;
    cout<< "enter size of arrays " <<endl;
    cin>>n;
    cout<< "enter elements of arrays " <<endl;
    for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
    }
    int ans=duplicatenumber(nums);
    cout<< "The duplicate number is: " << ans << endl;
    return 0;
}
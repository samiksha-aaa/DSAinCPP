#include<iostream>
#include<vector>
using namespace std;
int missingnumber(vector<int>& nums){
    int n=nums.size();
    int expectedsum=n*(n+1)*1/2;
    int actualsum=0;
    int answer;
    for(int num:nums){
        actualsum=actualsum+num;
    }
    answer=expectedsum-actualsum;
    return answer;
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
    int ans=missingnumber(nums);
    cout<< "The missing number is: " << ans << endl;
    return 0;
}
 #include<iostream>
 #include<vector>
using namespace std;
int singlenumber(vector<int>& nums){
    int result=0;
    for(int num:nums){
result=result^num;
    } return result;
}
int main(){
    int n;
    cout<< "enter n:" ;
    cin>> n;
    vector<int> nums(n);
    cout<< "enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<< "the single number is: "<< singlenumber(nums)<<endl;
    return 0;
}
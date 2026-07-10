#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>& nums){
    int count=0;
    int candidate=0;
    for(int num:nums){
        if(count==0){
            candidate=num;
        }
        if(num==candidate){
            count++;
        }else{
            count--;
        }
    
    return  candidate;
}

}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = majorityelement(arr);
    cout<<"The majority element is: "<<result<<endl;
    return 0;
}
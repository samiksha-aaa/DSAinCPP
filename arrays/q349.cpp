#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s(nums1.begin(), nums1.end());
    vector<int> ans;
    for(int num:nums2){
        if(s.count(num)){
            ans.push_back(num);
            s.erase(num);
        }
    }
    return ans;
}
int main(){
    vector<int> nums1;
    vector<int> nums2;
    int n1,n2;
    cout<<"enter the size of first array : ";
    cin>>n1;
    cout<<"enter the elements of first array : ";
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    cout<<"enter the size of second array : ";
    cin>>n2;
    cout<<"enter the elements of second array : ";
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    vector<int> result = intersection(nums1, nums2);
    cout<<"intersection of the two arrays is : ";
    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
bool perfectsquare(int num){
    int left=0;
    int right=num;
    int ans=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(mid*mid==num){
            ans=1;
            return mid;
        } else if(mid*mid<num){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return ans;
}
int main(){
    int num;
    cout<<"enter n: " <<endl;
    cin>>num;
    int ans=perfectsquare(num);
    cout<<ans;
    return 0;
}
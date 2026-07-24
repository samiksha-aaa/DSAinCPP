#include<iostream>
using namespace std;
int sqrrt(int x){
    int left=0;
    int right=x;
    int ans=-1;
while(left<=right){
    int mid=(left+right)/2;
    if(mid*mid==x){
        return mid;
    } else if(mid*mid<x){
        ans=mid;
        left=mid+1;
    } else{
        right=mid-1;
    }
} return ans;
}
int main(){
    int x;
    cout<< "enter x: " <<endl;
    cin>>x;
    int ans=sqrrt(x);
cout<<ans;
    return 0;
}
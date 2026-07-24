#include <iostream>
using namespace std;

int firstBad = 4;

bool isBadVersion(int version) {
    return version >= firstBad;
}
int firstBadVersion(int n) {
        int left=1;
int right=n;
int ans=-1;
while(left<=right){
 int mid=left+ (right-left)/2;
 if(isBadVersion(mid)){
    ans=mid;
    right=mid-1;
 }
 else if(!isBadVersion(mid)){
    left=mid+1; 
 }
 else{
    right=mid-1;
 }
} return ans;
    }
    int main(){
          int num;
    cout<<"enter n: " <<endl;
    cin>>num;
    int ans=firstBadVersion(num);
    cout<<ans;
    }
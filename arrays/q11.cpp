#include<iostream>
#include<vector>
using namespace std;
int maxarea(vector<int>& height){
    int left=0;
    int right=height.size()-1;
    int ans=0;
    while(left<right){
    int w=right-left;
    int h=min(height[left],height[right]);
    int area=h*w;
    ans=max(ans,area);
    if(height[left]<height[right]){
left++;
    }
    else{
        right--;
    }
    }
    return ans;
}

int main(){
    cout<<"enter the number of elements: ";
    int n;
    cin >> n ;
    vector<int> height(n);
    cout<<"enter the heights: ";
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    cout<<"maximum area is: "<<maxarea(height)<<endl;
    return 0;
}
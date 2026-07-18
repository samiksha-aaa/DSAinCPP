#include<iostream>
#include<unordered_set>
using namespace std;
int maxsubstring(string s){
    int left=0;
    int ans=0;
    unordered_set<int> st;
     for(int right=0;right<s.size();right++){
        while(st.count(s[right])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        ans=max(ans,right-left+1);
     } return ans;
}
int main(){
    string s;
    cout<<"enter s: " <<endl;
    cin>>s;
    int ans=maxsubstring(s);
    cout<<ans;
    return 0;
}
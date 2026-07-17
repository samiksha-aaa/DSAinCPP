#include<iostream>
#include<vector>
using namespace std;
int uniquestring(string s){
    vector<int> freq(26,0);
    for(char ch:s){
        freq[ch-'a']++;
    }
    for(int i=0;i<s.size();i++){
          if(freq[s[i]-'a']==1)
          return i;
    } return -1;
}
int main(){
string str;
cin >> str;
int ans=uniquestring(str);
cout << ans;
return 0;
}
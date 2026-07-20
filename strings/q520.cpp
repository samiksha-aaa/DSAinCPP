#include<iostream>
#include<algorithm>
using namespace std;
bool detectcapital(string word){
    int count=0;
for(char ch:word){
if(isupper(ch))
count++;
}
if(count==0)
return true;
if(count==word.size())
return true;
if(count==1 && isupper(word[0]))
return true;
return false;
}
int main(){
    string word;
    cin>>word;
    bool ans=detectcapital(word);
    cout<<ans;
    return 0;
}
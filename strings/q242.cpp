#include<iostream>
#include<vector>
using namespace std;
bool isanagram(string s,string t){
    vector<int> freq(26,0);
    for(char ch:s){
freq[ch-'a']++;
    }
    for(char ch:t){
        freq[ch-'a']--;
    }
    for(int count:freq){
        if(count!=0){
            return false;
        }
    } return true;
}
int main(){
    string s;
    string t;
    cout<< "enter s: " << endl;
    cin>> s ;
    cout<< "enter t: " << endl;
     cin>> t;
bool ans=isanagram(s,t);
cout<<ans;
    return 0;
}
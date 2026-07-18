#include<iostream>
#include<vector>
using namespace std;
bool canconstruct(string s,string t){
    vector<int> freq(26,0);
    for(char ch:t){
freq[ch-'a']++;
    }
    for(char ch:s){
        freq[ch-'a']--;
        if(freq[ch-'a']<0)
return false;    }
return true;
}
int main(){
    string s;
    string t;
    cout << "enter s: " << endl;
    cin >>s;
    cout << "enter t: " << endl;
    cin >>t;
    int ans=canconstruct(s,t);
    cout <<ans;
    return 0;
}
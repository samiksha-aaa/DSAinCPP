#include<iostream>
#include<vector>
using namespace std;

char findTheDifference(string s, string t) {
       vector<int> freq(26,0);
       for(char ch:s){
        freq[ch-'a']++;
       }
       for(char ch:t){
        freq[ch-'a']--;
        if(freq[ch-'a']<0){
            return ch;
        }
       }
        return ' ';
    }
    int main(){
        string s;
        string t;
        cout << "enter s: " << endl;
        cin >> s;
        cout << "enter t: " << endl;
        cin >> t;
        char ans=findTheDifference(s,t);
        cout << ans;
        return 0;
    }
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool wordPattern(string pattern, string s) {
       vector<string> words;
       string word="";
       for(char ch:s){
        if(ch==' '){
            words.push_back(word);
            word="";
        } else{
            word+=ch;
        }
       } words.push_back(word);
              if(words.size()!=pattern.size()){
        return false;
       }
       unordered_map<char,string> mp1;
unordered_map<string,char> mp2;
for(int i=0;i<pattern.size();i++){
     char ch=pattern[i];
     string s=words[i];
     if(mp1.count(ch)==0 && mp2.count(s)==0){
        mp1[ch]=s;
        mp2[s]=ch;
     } else{
        if(mp1[ch]!=s || mp2[s]!=ch)
            return false;
     }
}  return true;
        }
        
         int main(){
      string word1;
        string word2;
        cout << "enter word1: " << endl;
        cin >> word1;
        cin.ignore();
        cout << "enter word2: " << endl;
        getline(cin,word2);
// cout << "Sentence entered: " << word2 << endl;
        bool ans=wordPattern(word1,word2);
        cout << ans;
        return 0;
    }
#include<iostream>
 using namespace std;
string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string ans="";
        while(i<word1.size() || j<word2.size()){
    if(i<word1.size()){
         ans+=word1[i++];
        }
        if(j<word2.size()){
            ans+=word2[j++];
        }
        } return ans;
    }
    int main(){
      string word1;
        string word2;
        cout << "enter word1: " << endl;
        cin >> word1;
        cout << "enter word2: " << endl;
        cin >> word2;
        string ans=mergeAlternately(word1,word2);
        cout << ans;
        return 0;
    }
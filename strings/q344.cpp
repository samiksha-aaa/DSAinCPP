#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<char>& s){
int i=0;
int j=s.size()-1;
while(i<j){
    swap(s[i],s[j]);
    i++;
    j--;
}
}
int main(){
    string str;
    cin >> str;

    vector<char> s(str.begin(), str.end());

    reverse(s);   // No object needed

    for (char ch : s)
        cout << ch;
    return 0;
}
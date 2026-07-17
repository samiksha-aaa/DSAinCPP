#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isvowel(char ch){
    ch=tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
string reversevowels(string s){
int i=0;
int j=s.size()-1;
while(i<j){
    if(!isvowel(s[i]))
    {
        i++;
    } 
    else if (!isvowel(s[j]))
    {
        j--;
    } else
    {
swap(s[i],s[j]);
i++;
j--;
    }
} return s;
}
int main(){
    string str;
    cin >> str;

   str= reversevowels(str);   
cout<<str;
    return 0;
}
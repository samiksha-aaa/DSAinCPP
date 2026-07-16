#include<iostream>
using namespace std;
int converttonumber(string columntitle){
    int ans=0;
    for(char ch:columntitle){
int value=ch-'A'+1;
ans=ans*26+value;
    }return ans;
}
int main(){
string s;
cin>>s;
cout<< "the value of columnnumber is: " << converttonumber(s) <<endl;
    return 0;
}
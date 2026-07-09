#include<iostream>
using namespace std;
int lengthoflastword(string s){
    int i=s.length()-1;
    while(i>=0 && s[i]==' '){
    i--;
    }
    int count=0;
    while(i>=0 && s[i]!=' '){
        count++;
        i--;
    }
    return count;
}
int main(){
    string t;
    cout <<"enter the string: ";
  getline(cin, t);
    cout << "Length of last word: " << lengthoflastword(t) << endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<< "enter a string " <<endl;
    // cin>>str;
    // cout<< "The entered string is: " << str << endl;
    // to print the spaces too
    getline(cin, str);
    cout << str << endl;
   cout<< str.length() << endl;
cout << str.at(0) << endl;
cout<< str.front() <<endl;
cout << str.back() << endl;
str.append(" is a string");
cout << str << endl;
str.push_back('!');
cout << str << endl;
str.pop_back();
cout << str << endl;
str.clear();
cout << str << endl;
str.insert(1,"hello, hi");
cout << str << endl;
string b="hi";
// str.compare(b);
// str.swap(b);
str.find('l');
string s="goodbye!";
for(auto it=s.begin();it!=s.end();it++)
{
    cout << *it << endl;
}
return 0;
}
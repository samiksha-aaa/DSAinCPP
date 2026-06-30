#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,string> m;
    m.insert(make_pair("it","India"));
    m.insert(make_pair("us","United States"));
    m.insert(make_pair("uk","United Kingdom"));
    cout<< m.size() << endl;
    m["br"]="brazil";
cout<< m.size() << endl;
// m.clear();
// cout<< m.size() << endl;
cout<< m.at("it") <<endl;
m.at("it")="indonesia";
cout<< m.at("it") <<endl;
unordered_map<string,string>::iterator it=m.begin();
while(it!=m.end()){
pair<string,string> p=*it;
cout<< p.first << p.second <<endl;
it++;
}
    return 0;
}
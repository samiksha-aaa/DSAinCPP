#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(100);
    //iterate using for each
for(int i:l){
    cout<< i <<endl;
}
    // iterate using while loop
list<int>::iterator it = l.begin();
while(it!=l.end()){
    cout<< *it <<endl;
    it++;
}
l.pop_back();
l.pop_front();
cout<< l.size() <<endl; // tells the size of the list --> 3
l.clear();
cout<< l.size() <<endl; // tells the size of the list --> 0
if(l.empty()){
cout<<"list is empty" <<endl;
    }
    else{
        cout<<"list is not empty" <<endl;
    }
    return 0;
}
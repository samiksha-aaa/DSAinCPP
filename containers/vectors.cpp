#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout <<"VECTOR" <<endl;
    cout<<" topic 1: member functions of vector" <<endl;
    vector<int> v;
    v.push_back(10); // to push the element in the vector
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //iterate using for each
for(int i:v){
    cout<< i <<endl;
}
// iterate using while loop
vector<int>::iterator it = v.begin();
while(it!=v.end()){
    cout<< *it <<endl;
    it++;
}
    cout<< v.size() <<endl; // tells the size of the vector --> 4
    v.begin(); // to iterate the vector from the beginning
    cout<< *(v.begin()) <<endl; // to print the first element of the vector
    v.end(); // to iterate the vector from the end
    cout<< *(v.end()-1) <<endl; // to print the last element of the vector
    v.pop_back(); // to delete the last element of the vector
    v.pop_back(); // to delete the last element of the vector
   // to access the first element of the vector
    cout<< v.front() <<endl; 
// to access the last element of the vector
    cout<< v.back() <<endl; 
    if(v.empty()){
cout<<"vector is empty" <<endl;
    }
    else{
        cout<<"vector is not empty" <<endl;
    }
cout<< v.size() <<endl; // tells the size of the vector --> 2

    return 0;
}
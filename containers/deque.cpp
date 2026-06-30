#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(50);
    cout<< dq.front() << endl;
    cout<< dq.back() << endl;
    dq.pop_back();
    dq.pop_front();
    cout<< dq.front() << endl;
    deque<int>::iterator it=dq.begin();
    while(it!=dq.end()){
        cout<< *it << endl;
        it++;
    }
    cout<<dq[0]<<endl;
    cout<< dq[1]<<endl;
    cout<< dq.size() << endl;
    return 0;
}
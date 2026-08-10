#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int* arr;
int size;
int top;
Stack(int capacity){
    arr=new int[capacity];
    size=capacity;
    top=-1;
}
void push(int value){
    if(top==size-1){
        cout<<"stack overflow";
    }else{
        top++;
        arr[top]=value;
    }
}
void pop(){
    if(top==-1){
        cout<<"stack underflow";
    }else{
        arr[top]=-1;
        top--;
    }
}
int getsize(){
    if(top==-1){
        cout<<"stack empty";
    }else{
        return top+1;
    }
}
bool isempty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}
void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i];
        cout<<endl;
    }
}
};
int main(){
    Stack s(4);
    s.push(10);
    s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.print();
s.pop();
s.getsize();
s.print();
    return 0;
}
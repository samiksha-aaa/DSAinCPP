#include<iostream>
#include<queue>
using namespace std;
class myque{
    public:
    int* arr;
        int front;
        int rear;
        int size;
    myque(int capacity){
        size = capacity;
    arr=new int[capacity];
    front=-1;
    rear=-1;
    }
    void push(int value){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=value;
        } else if(rear==size-1){
            cout<<"queue overflow";
        } else{
            rear++;
            arr[rear]=value;
        }
    }
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"queue underlfow";
        }else if(front==rear){
            front=-1;
            rear=-1;
        } else{
            arr[front]=-1;
            front++;
        }
    }
    int getfrontelement(){
        if(front==-1){
            cout<<"no front element";
            return -1;
        } else {
            int val=arr[front];
            return val;
        }
    }
    int getrearelement(){
        if(rear==-1){
            cout<<"no rear element";
            return -1;
        }else{
            int val=arr[rear];
            return val;
        }
    }
    bool isempty(){
        if(front==-1 && rear==-1){
            return 1;
        } else{
            return 0;
        }
    }
    int getsize(){
        if(front==-1 && rear==-1){
            return 0;
        } else{
            return rear-front+1;
        }
    }
};
int main(){
    myque q(5);
q.push(5);
q.push(15);
q.push(25);
q.getsize();
q.pop();
cout<<q.isempty();
cout<<endl;
cout<<q.getfrontelement();
cout<<endl;
cout<<q.getrearelement();
cout<<endl;
    return 0;
}
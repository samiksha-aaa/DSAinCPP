#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
node(int value){
    this->data=value;
    this->next=NULL;
}
};
void insertathead(int value,node* &head,node* &tail){
    node* newnode=new node(value);
if(head==NULL && tail==NULL){
    head=newnode;
    tail=newnode;
} else{
    newnode->next=head;
    head=newnode;
}
}
void insertatend(int value,node* &head,node* &tail){
    node* newnode=new node(value);
    if(head==NULL && tail==NULL){
head=newnode;
tail=newnode;
    }else{
tail->next=newnode;
tail=newnode;
    }
    }
    void printlinkedlist(node * &head){
        node* temp=head;
        if(temp==NULL){
            cout<<"linked list is empty";
        } 
        while(temp!=NULL){
            cout<<temp->data<<"->";
        temp=temp->next;
            }
    }

    bool searchvalue(int target,node* head){
        node* temp=head;
        while(temp!=NULL){
            if(temp->data==target){
                return true;
            }else{
                temp=temp->next;
            }
        } return false;
    }
int main(){
    node* head=NULL;
    node* tail=NULL;
    insertathead(10,head,tail);
    insertatend(20,head,tail);
    insertatend(30,head,tail);
    insertatend(40,head,tail);
    insertatend(50,head,tail);
    printlinkedlist(head);
    bool found=searchvalue(30,head);
    cout<<endl;
    cout<<found;
    return 0;
}
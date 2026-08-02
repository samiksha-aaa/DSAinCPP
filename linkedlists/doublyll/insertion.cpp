#include<iostream>
using namespace std;
class node{
    public:
 node* prev;
 int data;
 node* next;
 node(int value){
    data=value;
prev=NULL;
next=NULL;

 }
};
int length(node* &head){
    int len=0;
node* temp=head;
while(temp!=NULL){
    len++;
    temp=temp->next;;
}
return len;
}
void insertathead(int value,node* &head,node* &tail){
if(head==NULL && tail==NULL){
node* newnode=new node(value);
    //empty ll
    head=newnode;
    tail=newnode;
}
else{
    // non empty ll
    node* newnode=new node(value);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
}

void insertatend(int value,node* &head,node * &tail){
  if(head==NULL && tail==NULL){
    node* newnode=new node(value);
    head=newnode;
    tail=newnode;
  }
else{
    node* newnode=new node(value);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
}
void insertatposition(int value,int position,node*& head,node*& tail){
    int len=length(head);
if(position==1){
    insertathead(value,head,tail);
    return;
}
else if(position==len+1)
{
    insertatend(value,head,tail);
    return;
} else{
node* temp=head;
for(int i=1;i<=position-2;i++){
temp=temp->next;
}
node* newnode=new node(value);
node* forward=temp->next;
newnode->prev=temp;
temp->next=newnode;
forward->prev=newnode;
newnode->next=forward;
}
}
void printlinkedlist(node* head) {

    node* temp = head;

    if (temp == NULL) {
        cout << "Linked list is empty";
        return;
    }

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
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
    insertatposition(100,3,head,tail);
    printlinkedlist(head);
    return 0;
}
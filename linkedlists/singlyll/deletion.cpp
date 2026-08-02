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


    int len(node* head){
        node* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        } return len;
    }


void insertatpos(int position,int value,node* &head,node* &tail){
    if(position==1){
        insertathead(value,head,tail);
        return;
}
        else if(position==len(head)+1){
        insertatend(value,head,tail);
        return;
        }
     node* newnode=new node(value);
     node* temp=head;
     for(int i=1;i<=position-2;i++){
 temp=temp->next;
     }
     newnode->next=temp->next;
     temp->next=newnode;
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
    void deleteatposition(int position,node* &head,node* &tail){
        int length=len(head);
if(position>length){
    cout<<"invalid position: " <<endl;

} 
if(position==1){
    node* temp=head;
    head=head->next;
     temp->next=NULL;
     delete temp;
}
if(head==tail && position==1){
    node* temp=head;
    head=NULL;
    tail=NULL;
    delete temp;
    return ;
} else{
 node* previous=head;
 for(int i=1;i<=position-2;i++){
       previous=previous->next;
 }
 node* current=previous->next;
 node* forward=current->next;

 current->next=NULL;
 previous->next=forward;
 delete current;
}
    }
int main(){
    node* head=NULL;
    node* tail=NULL;
    insertathead(10,head,tail);
    insertatend(20,head,tail);
    insertatend(30,head,tail);
    insertatend(40,head,tail);
    insertatend(50,head,tail);
    cout<<"before deletion: " <<endl;
    printlinkedlist(head);
    cout<<endl;
    cout<<"after deletion:"<<endl;
    deleteatposition(1,head,tail);
    printlinkedlist(head);
    return 0;
}
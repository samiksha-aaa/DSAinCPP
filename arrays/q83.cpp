 #include<iostream>
 using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 ListNode* deleteduplicated(ListNode* head){
    if(head == NULL){
        return head;
    }
    ListNode* curr=head;
    while(curr != NULL && curr->next != NULL){
        if(curr->val==curr->next->val){
            curr->next=curr->next->next;
        }else{
            curr=curr->next;
        }
        return head;
    }
 }
int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(1);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(3);
    cout << "Original List: ";
    ListNode* temp=head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
    ListNode* newhead=deleteduplicated(head);
    cout << "List after removing duplicates: ";
    while(newhead != NULL){
        cout << newhead->val << " ";
        newhead=newhead->next;
    }
    return 0;
}
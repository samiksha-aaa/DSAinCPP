#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertathead(int value, node*& head, node*& tail) {

    // Empty linked list
    if (head == NULL) {

        node* newnode = new node(value);

        head = newnode;
        tail = newnode;
    }

    // Non-empty linked list
    else {

        node* newnode = new node(value);

        newnode->next = head;

        head->prev = newnode;

        head = newnode;
    }
}

void deletion(int position, node*& head, node*& tail) {

    // Case 1: Empty linked list
    if (head == NULL) {

        cout << "Empty linked list" << endl;

        return;
    }

    // Case 2: Only one node
    else if (head == tail) {

        node* temp = head;

        head = NULL;
        tail = NULL;

        delete temp;
    }

    // Case 3: Delete the head node
    else if (position == 1) {

        node* temp = head;

        head = head->next;

        head->prev = NULL;

        temp->next = NULL;

        delete temp;
    }

    // Case 4: Delete a middle node or tail node
    else {

        node* current = head;

        // Move current to the required position
        for (int i = 1; i < position; i++) {
            current = current->next;
        }

        node* previous = current->prev;
        node* forward = current->next;

        // If deleting the tail
        if (forward == NULL) {

            previous->next = NULL;

            tail = previous;
        }

        // If deleting a middle node
        else {

            previous->next = forward;

            forward->prev = previous;
        }

        current->prev = NULL;
        current->next = NULL;

        delete current;
    }
}

void printlinkedlist(node* head) {

    node* temp = head;

    if (temp == NULL) {

        cout << "Linked list is empty" << endl;

        return;
    }

    while (temp != NULL) {

        cout << temp->data << " <-> ";

        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    node* head = NULL;
    node* tail = NULL;

    insertathead(10, head, tail);
    insertathead(20, head, tail);
    insertathead(30, head, tail);
    insertathead(40, head, tail);
    insertathead(50, head, tail);

    cout << "Doubly linked list before deletion:" << endl;

    printlinkedlist(head);

    deletion(3, head, tail);

    cout << "Doubly linked list after deletion:" << endl;

    printlinkedlist(head);

    return 0;
}

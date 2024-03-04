#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* prev;
        node* next;
        node(int val){
            data=val;
            prev=NULL;
            next=NULL;
        }
};
void insertAtHead(node* & head, int data){
    node* n = new node(data);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
    head->prev=NULL;
}
void insertAtTail(node* &head, int data){
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }
    node* n = new node(data);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteAtIndex(node* head, int index){
    node* temp = head;
    while(--index){
        temp=temp->next;
    }
    node* temp2 = temp->next;
    if(temp2->next==NULL){
        temp->next=NULL;
    }
    delete temp2;
    node* toDelete = temp->next;
    temp2 = temp->next;
    temp->next=temp2->next;
    temp2->next->prev=temp2->prev;
    delete toDelete;
}
node* reverseLinkedList(node* &head){
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayReverse(node* end){
    node* temp = end;
    while(temp->prev!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtHead(head,0);
    display(head);
    deleteAtIndex(head,4);
    display(head);
    node* end = reverseLinkedList(head);
    cout<<end->data;
    // displayReverse(end);
}
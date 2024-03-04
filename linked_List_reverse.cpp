#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int val){
        data=val;
        next=NULL;
        }
    };
void insertAtEnd(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteAtLast(node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;

}
void insertAtIndex(node* &head,int i,int val){
    int index=i;
    node* temp = head;
    node* nt = new node(val);
    while(index--){
        temp=temp->next;
    }
    node* ptr=nt;
    nt->next=temp;
    temp=ptr;
}
void insertAtFirst(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    head=n;
    n->next=temp;
}
int search(node* head, int target){
    int i=0;
    node* temp=head;
    while(temp!=NULL){
        i++;
        if(temp->data==target){
            return i;
        }
        temp=temp->next;
    }
    return -1;

}
void deleteAtIndex(node* &head,int i){
    node* temp=head;
    if(head==NULL){
        cout<<"Cannot delete in a empty list";
        return;
    }
    if(i==0){
        head=temp->next;
        return;
    }
    while(--i){
        temp=temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int linkedListLength(node* &head){
    int i=0;
    node* temp = head;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
node* reverseList(node* &head){
    node* previous=NULL;
    node*current=head;
    node* after;
    while(current!=NULL){
        after=current->next;
        current->next=previous;
        previous=current;
        current=after;
    }
    return previous;
}
int main(){
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    head = reverseList(head);
    display(head);
}
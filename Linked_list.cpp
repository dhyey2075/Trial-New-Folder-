#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d){
        data=d;
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
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
void deleteAtLast(node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
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
    i--;
    while(i--){
        temp=temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int linkedListLength(node* head){
    int i=0;
    node* temp = head;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}
void makeCycle(node* &head, int index){
    node* mark = head;
    node* temp = head;
    while(index--){
        mark=mark->next;
    }
    cout<<endl;
    cout<<mark->data;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=mark;
}
bool isCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
node* appendKNodes(node* &head, int k){
    int l = linkedListLength(head);
    int index = l-k;
    if(index==0){
        return head;
    }
    node* temp = head;
    node* newTail = head;
    node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    while(--index){
        newTail = newTail->next;
    }
    temp = newTail->next;
    newTail->next=NULL;
    tail->next=head;
    return temp;
}
void intersectionOfLinkedList(node* head1, node* head2){
    int count=0;
    int l1 = linkedListLength(head1);
    int l2 = linkedListLength(head2);
    int l = abs(l1-l2);
    node* temp1;
    node* temp2;
    if(l1>=l2){
        temp1 = head1;
        temp2 = head2;
    }
    else{
        temp1 = head2;
        temp2 = head1;
    }
    while(l--){
        temp1 = temp1->next;
    }
    while(temp1->data!=temp2->data && temp1->next!=NULL){
        count++;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(count==linkedListLength(head2)-1){
        cout<<"No point of intersection";
        return;
    }
    cout<<"Found at "<<count<<" in shorter linked list"<<endl;
    cout<<"Found at "<<count+abs(linkedListLength(head1)-linkedListLength(head2))+1<<" in longer linked list"<<endl;
}
node* evenodd(node* &head){
    int l = linkedListLength(head);
    node* odd = head;
    node* evenStart = head->next;
    node* even = head->next;
    while(even->next!=NULL && odd->next!=NULL){
        odd->next=even->next;
        odd=even->next;
        even->next=odd->next;
        even=odd->next;
    }
    if(l%2==0){
        odd->next=evenStart;
    }
    else{
        odd->next=evenStart;
    }
    even->next=NULL;
}
node* rotateLL(node* &head, int k){
    int l = (linkedListLength(head)-k)%(linkedListLength(head));
        if(linkedListLength(head)-k>0){
            l--;
        }
        cout<<"l is "<<l<<endl;
        node* temp = head;
        node* t = head;
        if(head==NULL || head->next==NULL) return head;
        if(t==NULL || t->next==NULL) return head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(l--){
            t=t->next;
        }
        head=t->next;
        t->next=NULL;
        temp->next=head;
        return head;
}
int main(){
    node* head=NULL;
    insertAtEnd(head,0);
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    head = rotateLL(head,1);
    display(head);
}
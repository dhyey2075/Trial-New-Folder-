#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class Queues{
    node* front;
    node* back;
    public:
        Queues(){
            front = NULL;
            back = NULL;
        }
    void push(int val){
        node* n = new node(val);
        if(front == NULL){
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop(){
        if(front==NULL){
            cout<<"Cannot pop from empty queue.\n";
        }
        node* toDelete = front;
        front = front->next;
        delete toDelete;
    }
    int peep(){
        if(front==NULL){
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    node* head = NULL;
    Queues q;
    q.push(1);
    q.push(2);    
    q.push(3);    
    q.push(3);    
    cout<<q.peep()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peep()<<endl;
    cout<<q.empty()<<endl;
}
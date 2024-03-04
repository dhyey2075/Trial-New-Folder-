#include<bits/stdc++.h>
#define n 10
using namespace std;    
class Queue{
    int* arr;
    int front, back;
    public:
        Queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }
    void push(int x){
        if(back == n-1){
            cout<<"Queue if full...cannot add elements.\n";
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }
    void pop(){
        if(front == -1 || back<front){
            cout<<"Queue is empty...cannot remove elements.\n";
            return;
        }
        front++;
    }
    int peep(){
        if(front == -1 || back<front){
            cout<<"Queue is empty...cannot remove elements.\n";
            return -1;
        }
        return arr[front];
    }
    bool Isempty(){
        if(front == -1 || back<front){
            return true;
        }
        return false;
    }
};
int main(){
        Queue q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        cout<<q.peep()<<endl;
        q.pop();
        cout<<q.peep()<<endl;
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Que{
public:
    stack<int> s1;
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"cannot pop.\n";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(!s1.empty()){
            return x;
        }
        int item = pop();
        s1.push();
        return item;
    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};
int main(){
    Que q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
}
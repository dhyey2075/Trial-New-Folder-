#include<bits/stdc++.h>
using namespace std;
class Que{
public:
    stack<int> s1;
    stack<int> s2;
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"cannot pop.\n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topv = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return topv;
    }
    bool empty(){
        if(s1.empty() && s2.empty()){
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
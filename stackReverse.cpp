#include<bits/stdc++.h>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st,int item){
    if(st.empty()){
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st,item);
    st.push(item);
}
void stackReverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int item = st.top();
    st.pop();
    stackReverse(st);
    insertAtBottom(st,item);
}
int main(){
    stack<int> stck;
    stck.push(1);
    stck.push(2);
    stck.push(3);
    stck.push(4);
    while(!stck.empty()){
        cout<<stck.top()<<endl;
        stck.pop();
    }
    stackReverse(stck);
    while(!stck.empty()){
        cout<<stck.top()<<endl;
        stck.pop();
    }
}
#include<bits/stdc++.h>
#include<stack>
using namespace std;
char mirrorImage(char c){
    if(c == ')') return '(';
    if(c == '}') return '{';
    if(c == ']') return '[';
}
bool isBalanced(string s){
    stack<char> st;
    bool flag = false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
            cout<<"At top "<<st.top()<<endl;
        }
        else{
            if(st.top() == mirrorImage(s[i])){
                cout<<"At top "<<st.top()<<endl;
                st.pop();
            }
            else{
                flag = true;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    if(flag) return false;
    return true;
}
int main(){
    cout<<isBalanced("[(){}]")<<endl;
}
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    stack<int> s1;
    stack<int> s2;

    while (t--) {
        int s;
        cin >> s;

        switch (s) {
            case 1: {
                int n;
                cin >> n;
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
                s1.push(n);
                while (!s2.empty()) {
                    s1.push(s2.top());
                    s2.pop();
                }
                break;
            }
            case 2: {
                if (!s1.empty()) {
                    s1.pop();
                }
                break;
            }
            case 3: {
                if (!s1.empty()) {
                    cout << s1.top() << endl;
                } else {
                    cout << "Stack is empty!" << endl;
                }
                break;
            }
            default: {
                cout << "Invalid operation!" << endl;
                break;
            }
        }
    }

    return 0;
}
int main() {
    int t;
    cin>>t;
    stack<int> s1;
    stack<int> s2;
    while(t--){
        int s;
        cin>>s;
        switch(s){
            case 1:{
                int n;
                cin>>n;
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                s1.push(n);
                while(!s2.empty()){
                    s1.push(s2.top());
                    s2.pop();
                }
                break;
            }
            case 2:{
                if(!s1.empty()){
                    s1.pop();
                }
                break;
            }
            case 3:{
                if(!s1.empty()){
                cout<<s1.top()<<endl;
                }
                break;
            }
        }
    }
    return 0;
}

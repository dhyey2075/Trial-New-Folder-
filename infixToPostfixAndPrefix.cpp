#include<bits/stdc++.h>
#include<stack>
#include<math.h>
#include<algorithm>
using namespace std;
int precedence(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c== '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixToPostfix(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >='A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
            res = res + s[i];
        }
        else if(s[i] == '('){
            st.push('(');
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top()!='('){
                res = res + st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top())>precedence(s[i])){
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res = res + st.top();
        st.pop();
    }
    return res;
}
string infixToPrefix(string s){
    reverse(s.begin(),s.end());
    for(int j=0;j<s.length();j++){
        if(s[j]==')'){
            s[j] = '(';
        }
        else if(s[j] == '('){
            s[j] = ')';
        }
    }
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >='A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
            res = res + s[i];
        }
        else if(s[i] == '('){
            st.push('(');
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top()!='('){
                res = res + st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top())>precedence(s[i])){
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res = res + st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string a;
    cin>>a;
    cout<<"Postfix is "<<infixToPostfix(a)<<endl;
    cout<<"Prefix is "<<infixToPrefix(a);
}
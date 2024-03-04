#include<bits/stdc++.h>
#include<stack>
using namespace std;
void reverseASentence(string s){
    stack<string> str;
    string word="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' || i==s.length()-1){
            if(i==s.length()-1){
                str.push(word+s[i]);
            }
            else{
                str.push(word);
            }
            word="";
            continue;
        }
        word = word + s[i];
    }
    while(!str.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
}
int main(){
    string s;
    getline(cin,s);
    reverseASentence(s);
}
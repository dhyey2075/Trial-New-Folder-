#include<bits/stdc++.h>
using namespace std;
string removeDuplicatesRecursion(string s){
    if(s.length()==0){
        return "";
    }
    char c = s[0];
    string ros = removeDuplicatesRecursion(s.substr(1));
    if(c == ros[0]){
        return ros;
    }
    else{
        return c+ros;
    }
}
int main(){
    string s;
    cin>>s;
    cout<<removeDuplicatesRecursion(s);
}
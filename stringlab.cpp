#include <bits/stdc++.h>
#include <string>
using namespace std;
int count(string str){
    int c=0;
    if(str[0]=='S'){
        c++;
    }    
    if(str[1]=='O'){
        c++;
    }
    if(str[2]=='S'){
        c++;
    }
    return 3-c;
}
int main(){
    int ct=0;
    string str="DHYEYY";
    for(int i=0;i<str.length();i=i+3){
    string s = str.substr(i,3);
    ct = ct + count(s);
    }
    cout<<ct;
}
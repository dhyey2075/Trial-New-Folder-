#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s){
    string a=s;
    reverse(s.begin(),s.end());
    if(s==a){
        return true;
    }
    return false;
}
int palindromeIndex(string s){
    int i=0,j=s.length()-1;
    while(i<j && s[i]==s[j]){
        i++;
        j--;
    }
    if(i<j){
        if(isPalindrome(s.substr(0,i)+s.substr(i+1))){
            return i;
        }
        else if(isPalindrome(s.substr(0,j)+s.substr(j+1))){
            return j;
        }
    }
    return -1;
}
int main(){
    string str,s;
    cin>>str;
    cout<<palindromeIndex(str);
}
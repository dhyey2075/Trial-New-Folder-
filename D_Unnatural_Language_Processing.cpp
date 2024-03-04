#include<iostream>
using namespace std;
bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
}
bool isCons(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return false;
    }
    return true;
}
int main(){
    int n,x;
    cin>>x;
    while(x>0){
    cin>>n;
    string str;
    cin>>str;
    int i=0;
    while(i<n){
        if(isCons(str[i]) && isVowel(str[i+1]) && isCons(str[i+2]) && isCons(str[i+3])){
            cout<<str[i];
            cout<<str[i+1];
            cout<<str[i+2];
            i=i+3;
            if(i<n){
                cout<<".";
            }
        }
        else if(isCons(str[i]) && isVowel(str[i+1]) && isCons(str[i+2]) && isVowel(str[i+3]) && i+3<n){
            cout<<str[i];
            cout<<str[i+1];
            i=i+2;
            if(i<n){
                cout<<".";
            }
        }
        else if(isCons(str[i]) && isVowel(str[i+1]) && isVowel(str[i+2]) && i+2<n){
            cout<<str[i];
            cout<<str[i+1];
            i=i+2;
            if(i<n){
                cout<<".";
            }
        }
        else{
            cout<<str[i];
            i++;
        }
    }
    x--;
    cout<<endl;
    }
}
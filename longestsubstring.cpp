#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    int len =0,mxlen=0;
    getline(cin,str);
    int arr[128];
    for(int j=0;j<128;j++){

        arr[j] = -1;
    }
    for(int i=0; i<str.size(); i++){
        if(arr[str[i]]==-1){
            arr[str[i]] = i;
            len++;
            mxlen = max(mxlen,len);
        }
        else{
            mxlen = max(len, mxlen);
            len = i - arr[str[i]];
            for(int k=0;k<128;k++){
                arr[k] = -1;
            }
            for(int k=i;k>i-len;k--){
                arr[str[k]] = k;
            }
            arr[str[i]] = i;
        }
    }
    cout<<"final len: "<<mxlen;
    }
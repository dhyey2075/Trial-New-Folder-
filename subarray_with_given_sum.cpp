#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,S=7;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int s=0,en=0;
    int currSum = 0;
    while(en<n && (currSum + arr[en] <= S)){
        en++;
        currSum = currSum + arr[en];
    }
    cout<<currSum;
    while(s<n && currSum!=S){
        currSum=currSum-arr[s];
        s++;
    }
    cout<<"Start Index "<<s<<endl;
    cout<<"End Index "<<en<<endl;
}
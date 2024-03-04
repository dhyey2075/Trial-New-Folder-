#include<bits/stdc++.h>
using namespace std;
bool checkSort(int arr[], int n){
    if(n==1){
        return true;
    }
    bool flag = checkSort(arr+1,n-1);
    if(arr[0]<arr[1] && flag){
        return true;
    }
    return false;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<checkSort(arr,n);
}
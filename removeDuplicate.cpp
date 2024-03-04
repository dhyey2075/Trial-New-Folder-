#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[], int n){
    int i=0;
    int j=1;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int k = removeDuplicate(arr,7);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
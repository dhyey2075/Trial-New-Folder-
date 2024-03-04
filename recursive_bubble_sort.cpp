#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    if(n==1) return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}
int main(){
    int arr[] = {4,3,2,1,5};
    bubble_sort(arr,5);
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }
}
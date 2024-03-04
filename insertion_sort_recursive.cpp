#include<bits/stdc++.h>
using namespace std;
void selection_sort_recursive(int arr[], int n, int i){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if(n==1) return;
    int minidx = i;
    for(int j=i;i<n-1;i++){
        if(arr[j]<arr[minidx]){
            minidx = j;
        }
    }
    selection_sort_recursive(arr,n,i+1);
}
int main(){
    int arr[] = {5,4,3,2,1};
    selection_sort_recursive(arr,5,0);
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }
}
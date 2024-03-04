#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int k = l;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[k];
        k++;
    }
    for(int j=0;j<n2;j++){
        b[j] = arr[k];
        k++;
    }
    k=l;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;
    }
}
void merge_sort(int arr[], int l, int r){
    if(l<r){
    int mid = (l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }   
}
int main(){
    int arr[] = {5,4,3,2,1};
    merge_sort(arr,0,4);
    for(int k=0;k<5;k++){
        cout << arr[k] << " ";
    }
    return 0;
}   
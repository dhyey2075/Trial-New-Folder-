#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Merge(int arr[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    int k=l;
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+1+j];
    }
    k=l;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
}
void MergeSort(int arr[], int l, int r){
     if(l<r){
         int mid=(l+r)/2;
         MergeSort(arr,l,mid);
         MergeSort(arr,mid+1,r);
         Merge(arr,l,mid,r);
     }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n);  
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }  
    return 0;
}

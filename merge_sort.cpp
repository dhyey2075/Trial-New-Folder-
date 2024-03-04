#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int i, int j){
    for(int k=i;k<j;k++){
        cout<<arr[k]<<" ";
    }
}
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    int k=l;
    for(int l=0;l<n1;l++){
        a[l]=arr[k];
        k++;
    }
    for(int l=0;l<n2;l++){
        b[l]=arr[k];
        k++;
    }
    int i=0,j=0;
    k=l;
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
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int num[]={23,6,11,88,56,9,1};
    mergeSort(num,0,6);
    printArray(num,0,7);
}
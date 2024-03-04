#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void swapped(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 
}
int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i=l-1;
    int j;
    for(j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swapped(arr,i,j);
        }
    }
    swapped(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    quickSort(arr,0,8);
    for(int k=0;k<9;k++){
        cout<<arr[k]<<" ";
    }
}
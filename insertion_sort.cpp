#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp = arr[i];
        while(j>=0 and arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
   int arr[] = {6,5,4,3,2,1};
   insertion_sort(arr,6);
   for(int k=0;k<6;k++){
        cout<<arr[k]<<" ";
   }
}
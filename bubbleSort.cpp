#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int i, int j){
for(int k=i;k<j;k++){
    cout<<arr[k]<<" ";
    }
}
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
int main(){
    int arr[]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    bubbleSort(arr,15);
    printArray(arr,0,15);

}
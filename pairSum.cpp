#include <bits/stdc++.h>
using namespace std;
// int* bubbleSort(int arr[], int n){
//     for(int i=1;i<n;i++){
//         for(int j=i;j>=0;j--){
//             if(arr[j]<arr[j-1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }
bool isPair(int arr[], int pair, int n){
    int start=0, end = n-1,sum=0;
    while(sum != pair && start<end){
        sum = arr[start] + arr[end];
        if(sum == pair) return true;
        else if(sum>pair){
            end = end-1;
        }
        else{
            start =start+1;
        }
    }
    return false;
}
int main(){
    int n,pair,sum=0;
    cin>>n>>pair;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<isPair(arr, pair, n);
}
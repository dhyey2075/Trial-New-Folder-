#include <bits/stdc++.h>
using namespace std;
bool sort(int arr[], int n){
    if(n==1){
        return true;
    }
    bool isSort = sort(arr+1,n-1);
    return(arr[0]<arr[1] && isSort);
}
int main(){
    int n;
    int arr[] = {1,2,3,4,5};
    cout<<sort(arr,5);
}
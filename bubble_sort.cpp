#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        
    for(int i=1; i<n; i++){
        for(int l=i; l>=0; l--){
            if(arr[l]<arr[l-1]){
                int temp = arr[l];
                arr[l] = arr[l-1];
                arr[l-1] = temp;
            }
            else{
                break;
            }
            
        }
    }
    for(int p=0; p<n; p++){
            cout<<arr[p]<<" ";
        }
}
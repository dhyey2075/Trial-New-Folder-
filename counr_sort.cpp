#include<bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int n,mx=INT_MIN,totalsum=0;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    int count[mx]={0};
    for(int j=0;j<mx;j++){
        count[arr[j]]=count[arr[j]]+1;
    }
    for(int l=0;l<mx;l++){
        int temp = count[l];
        count[l]=totalsum;
        totalsum+=temp;
    }
    int p=n-1;
    while(p>=0){
        count[arr[p]]--;
        arr2[count[arr[p]]] = arr[p];
        p--;
    }
    for(int m=0;m<n;m++){
        cout<<arr2[m];
    }

}
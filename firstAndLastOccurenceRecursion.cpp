#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[], int n,int i,int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstOccurence(arr,n,i+1,key);
}
int lastOccurence(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int rest = lastOccurence(arr,n,i+1,key);
    if(rest!=-1){
        return rest;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}
int main(){
    int arr[] = {4,6,1,2,5,6,7};
    cout<<lastOccurence(arr,7,0,2);
}
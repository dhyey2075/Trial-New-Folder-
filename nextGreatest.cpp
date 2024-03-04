#include<bits/stdc++.h>
#include<stack>
using namespace std;

void nextGreatest(int arr[], int n){
    int nge[n];
    stack<int> st;
    int i;
    for(i = 2 * n - 1; i >= 0; i--){
        while (!st.empty() && st.top() < arr[i % n]){
            st.pop();
        }
        if (i < n){
            if (!st.empty()){
                nge[i] = st.top();
            }
            else{
                nge[i] = -1;
            }
        }
        st.push(arr[i % n]);
    }
    for (int j = 0; j < n; j++){
        cout << nge[j] << " ";
    } 
}
void left_smaller(int arr[], int n){
    int nge[n];
    stack<int> st;
    int i;
    for(i = 0; i < n; i++){
        while (!st.empty() && arr[st.top()] >= arr[i % n]){
            st.pop();
        }
        if(st.empty()) nge[i] = 0;
        else nge[i] = st.top()+1;
        st.push(i);
    }
    for (int j = 0; j < n; j++){
        cout << nge[j] << " ";
    }
}
void right_smaller(int arr[], int n){
    int nge[n];
    stack<int> st;
    int i;
    for(i = n-1; i >= 0; i--){
        while (!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        if(st.empty()) nge[i] = n-1;
        else nge[i] = st.top()-1;
        st.push(i);
    }
    for (int j = 0; j < n; j++){
        cout << nge[j] << " ";
    }
}
int main(){
    int arr[] = {4, 2, 12, 5, 9, 4};
    int nums[] = {2,1,5,6,2,3,1};
    left_smaller(nums,7);
    cout<<endl;
    right_smaller(nums,7);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int maxOfThree(int a, int b, int c){
    int mx1 = max(a,b);
    int mx2 = max(mx1,c);
    return mx2;
}
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<h1.size();i++){
        sum1+=h1[i];
    }
    for(int i=0;i<h2.size();i++){
        sum2+=h2[i];
    }
    for(int i=0;i<h3.size();i++){
        sum3+=h3[i];
    }
    do{
        int mx = maxOfThree(sum1,sum2,sum3);
            if(mx==sum1){
                sum1 = sum1 - h1.back();
            }
            else if(mx==sum2){
                sum2 = sum2 - h2.back();
            }
            else{
                sum3 = sum3-h3.back();
            }
        }while(sum1!=sum2 && sum2!=sum3);
        return sum1;
    }
int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v2.push_back(4);
    v2.push_back(3);
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(4);
    v3.push_back(1);
    cout<<equalStacks(v1,v2,v3);
}
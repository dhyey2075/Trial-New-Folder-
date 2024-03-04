#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int arr[], int s, int e, int t){
    for(int i=s;i<=e;i++){
        if(arr[i] == t){
            return i;
        }
    }
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node* buildTree(int preorder[], int inorder[], int start, int end){
    if(start>end){
        return NULL;
    }
    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    node* n = new node(curr);
    if(start==end){
        return n;
    }
    int pos = search(inorder, start, end, curr);
    n->left = buildTree(preorder, inorder, start, pos-1);
    n->right = buildTree(preorder, inorder, pos+1, end);
    return n;
}
void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    // node* root = new node(1);
    int preorder[] = {1,2,3,4,5};
    int inorder[] = {4,2,1,5,3};
    node* root = buildTree(preorder,inorder,0,4);
    printInorder(root);
    /*
            1
           / \
          2   3
         / \ / \
        4  5 6  7
    */
}
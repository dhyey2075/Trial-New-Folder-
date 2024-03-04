#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
// void/*vector<vector<int>>*/ tranversal(TreeNode* root){
//     stack<pair<TreeNode*, int>> st;
//     vector<vector<int>> ans;
//     if(root==NULL) return ans;
//     st.push({root,1});
//     vector<int> preo;
//     vector<int> io;
//     vector<int> post;
//     while(!st.empty()){
//         auto p = st.top();
//         st.pop();
//         switch (p.second)
//         {
//         case 1:
//             preo.push_back(p.first->val);
//             p.second++;
//             st.push(p);
//             if(p.first->left!=NULL){
//                 st.push({p.first->left,1});
//             }
//             break;
//         case 2:
//             io.push_back(p.first->val);
//             p.second++;
//             st.push(p);
//             if(p.first->right!=NULL){
//                 st.push({p.first->right,1});
//             }
//             break;
//         case 3:
//             post.push_back(p.first->val);
//             break;
        
//         default:
//             break;
//         }
//     }
//     ans.push_back(preo);
//     ans.push_back(io);
//     ans.push_back(post);
//     for(auto i : preo){
//         cout<<i<<" ";
//     }
//         cout<<endl;
//     for(auto i : io){
//         cout<<i<<" ";
//     }
//         cout<<endl;
//     for(auto i : post){
//         cout<<i<<" ";
//     }
//         cout<<endl;
// }
static bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

    void topView(Node * root) {
        if(root==NULL) return;
        queue<pair<Node*,int>> q;
        vector<pair<int,int>> v;
        q.push({root,0});
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto queueNode = q.front();
                int temp = queueNode.second;
                int t = temp;
                q.pop();
                if(queueNode.first->left!=NULL) q.push({queueNode.first->left,--temp});
                if(queueNode.first->right!=NULL) q.push({queueNode.first->right,++t});
                v.push_back({queueNode.first->data,queueNode.second});
            }
        }
        sort(v.begin(),v.end(),sortbysec);
        int temp = 501;
        for(auto i : v){
            if(i.second==temp){
                continue;
            }
            cout<<i.first<<" ";
            temp = i.second;
        }
    }
void addLeaf(Node* node, vector<int> &ans) {
    if (!node->left && !node->right) {
        ans.push_back(node->data);
        return;
    }
    if (node->left) addLeaf(node->left, ans);
    if (node->right) addLeaf(node->right, ans);
}

vector<int> boundaryTraversal(Node* node) {
    if (!node) return {};  // Handle empty tree
    Node* root = node;
    vector<int> ans;

    // Add root to the result
    ans.push_back(node->data);

    // Add left boundary (excluding leaf nodes)
    while (node->left && (node->left->left || node->left->right)) {
        ans.push_back(node->left->data);
        node = node->left;
    }

    // Add leaf nodes
    addLeaf(root, ans);

    // Add right boundary (excluding leaf nodes)
    stack<Node*> st;
    while (node->right && (node->right->left || node->right->right)) {
        st.push(node->right);
        node = node->right;
    }

    // Pop and add nodes from the stack
    while (!st.empty()) {
        ans.push_back(st.top()->data);
        st.pop();
    }

    return ans;
}

int main(){
    Node* root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right  = new Node(4);
    root->left->left->right->left = new Node(5);
    root->left->left->right->right - new Node(6);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->left->left = new Node(10);
    root->right->right->left->right = new Node(11);
    vector<int> ans = boundaryTraversal(root);
    for(auto i : ans){
        cout<<i<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node*left,*right;
 
 Node(int v){
    data = v;
    left=right=NULL;
 }   
};

vector<int> Inorder(Node* root){
    vector<int>res;
        stack<Node*>st;
        Node* node = root;
        while(node != NULL || !st.empty()){
            if(node!=NULL){
                st.push(node);
                node = node->left;
            }
            else{
                // if(st.empty()) break;
                node = st.top();
                st.pop();
                res.push_back(node->data);
                node = node->right;
            }
        }
        return res;
    }

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    vector<int>ans = Inorder(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   Node *left,*right;
   Node(int v){
    data = v;
    left=right=NULL;
   }

};
vector<vector<int>> LevelOrderTraversal(Node *root){
    queue<Node*>q;
    vector<vector<int>>ans; 
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node *node = q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>>ans = LevelOrderTraversal(root);
    for(auto it:ans){
        for(auto x:it){
        cout<<x<<" ";
        }
    }
    

return 0;
}
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

void Preorder(Node* node){
    if(node==NULL)
    return;

    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    Preorder(root);

return 0;
}
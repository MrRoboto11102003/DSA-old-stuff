#include <iostream>
using namespace std;
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(-1), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inorderTraversal(TreeNode* root, int& sum) {
    if (root == nullptr) {
        return;
    }
    if (root->val==-1) {
        return;
    }
    
    inorderTraversal(root->right, sum);
    sum += root->val;
    root->val = sum;
    inorderTraversal(root->left, sum);
}
void printInorder(TreeNode* node,int A[],int n,int s) {
    if (node == nullptr) {
        return;
    }
    if(s>n)return;
    A[s-1]=node->val;
    printInorder(node->left,A,n,s*2);
    printInorder(node->right,A,n,(s*2)+1);
}
void makeTree(TreeNode* node,int A[],int s,int e)
{
    if(s>e)return;
    node->val=A[s-1];
    if(node->val==-1)
    {
        return;
    }
    node->left=new TreeNode();
    makeTree(node->left,A,s*2,e);
    node->right=new TreeNode();
    makeTree(node->right,A,(s*2)+1,e);
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    TreeNode* root=new TreeNode(A[0]);
    makeTree(root,A,1,n);
    cout<<"\n";
    int sum=0;
    int B[n];
    printInorder(root,B,n,1);
    for(int i=0;i<n;i++)cout<<B[i]<<" ";
    inorderTraversal(root,sum);
    cout<<"\n";
    printInorder(root,B,n,1);
    for(int i=0;i<n;i++)cout<<B[i]<<" ";
}
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

void inorderTraversal(TreeNode* root, int sum, int *ptr,int target) {
    if (root == nullptr) {
        return;
    }
    if (root->val==-1) {
        return;
    }
    
    sum += root->val;
    if(sum==target)(*ptr) ++;
    inorderTraversal(root->right, sum,ptr,target);
    inorderTraversal(root->left, sum,ptr,target);
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
    int n,x;
    cin>>n>>x;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    TreeNode* root=new TreeNode(A[0]);
    makeTree(root,A,1,n);
    cout<<"\n";
    int B[n];
    int s=0,*y=&s;
    inorderTraversal(root,0,y,x);
    cout<<s;
}
#include <iostream>
using namespace std;
struct TreeNode {
int val;
TreeNode *left=nullptr;
TreeNode *right=nullptr;
TreeNode() : val(-1), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int kthgreatest(TreeNode* node, int k) {
    TreeNode* root=node;k--;
    while(node->right!=nullptr){if(node->right->val==-1){break;}node=node->right;k--;}
    if(k<=0)
    {
        while(k<0){root=root->right;k++;}
        return root->val;
    }
    else
    {
        return kthgreatest(root->left,k);
    }
    return -1;
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
    int n,k;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    cin>>k;
    TreeNode* root=new TreeNode(A[0]);
    makeTree(root,A,1,n);
    cout<<"\n";
    cout<<kthgreatest(root,k);
}
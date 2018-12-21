#include <iostream>
#include <stack>
using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool hasPathSum(TreeNode* root, int sum)
{
        if(root==nullptr)
                return false;
        if(root->left==nullptr&&root->right ==nullptr )
        {
                if(root->val == sum)
                        return true;
                else
                        return false;
        }
        bool l=false ,r=false ;
        if(root->left!=nullptr)
                l=hasPathSum(root->left,sum -root->val);
        if(root->right!=nullptr)
                r=hasPathSum(root->right,sum -root->val);
        return l||r;
}
bool hasPathSum(TreeNode* root, int sum)
{
        if(root==nullptr)
                return false;
        stack<TreeNode*> treeStack;
        root->val = sum-root->val;
        treeStack.push(root);
        while(!treeStack.empty())
        {
                TreeNode* node = treeStack.top();
                if(node->left==nullptr&&node->right ==nullptr&&node->val==0)
                        return true;
                treeStack.pop();
                if(node->right!=nullptr)
                {
                        node->right->val = node->val-node->right->val;
                        treeStack.push(node->right);
                }
                if(node->left!=nullptr)
                {
                        node->left->val = node->val-node->left->val;
                        treeStack.push(node->left);
                }
        }
        return false;
}

int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

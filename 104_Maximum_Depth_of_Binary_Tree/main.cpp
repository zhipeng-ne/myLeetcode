#include <iostream>
#include <queue>
using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int maxDepth2(TreeNode* root)
{
        if(root == nullptr )
                return 0;
        queue<TreeNode*> queueStack;
        queueStack.push(root);
        int hight =0;
        while(!treeStack.empty())
        {
                hight++;
                for(int i=0,n=queueStack.size();i<n;i++)
                {
                        TreeNode* p = queueStack.front();
                        queueStack.pop();
                        if(p->left!=nullptr)
                                queueStack.push(p->left);
                        if(p->right!=nullptr)
                                queueStack.push(p->right);
                }
        }
        return hight;
}
int maxDepth(TreeNode* root)
{
        if(root ==nullptr)
                return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

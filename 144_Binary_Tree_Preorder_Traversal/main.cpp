#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> preorderTraversal(TreeNode* root)
{
        vector<int> result;
        if (root == nullptr)
                return result;

        stack<TreeNode*> treeStack;
        treeStack.push(root);
        while(!treeStack.empty())
        {
                TreeNode* p = treeStack.top();
                treeStack.pop();
                result.push_back(p->val);
                if (p->right != nullptr)
                {
                        treeStack.push(p->right);
                }
                if (p->left != nullptr)
                {
                        treeStack.push(p->left);
                }
        }
        return result;
}

int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

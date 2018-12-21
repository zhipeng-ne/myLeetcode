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

vector<int> inorderTraversal(TreeNode* root)
{
        vector<int> result;
        if (root == nullptr)
                return result;

        stack<TreeNode*> treeStack;
        treeStack.push(root);
        while(!treeStack.empty())
        {
                if(root != nullptr)
                {
                        treeStack.push(root);
                        root = root->left;
                }
                else
                {
                        TreeNode* p = treeStack.top();
                        treeStack.pop();
                        result.push_back(p->val);
                        root = p->right;
                }
        }
        return result;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

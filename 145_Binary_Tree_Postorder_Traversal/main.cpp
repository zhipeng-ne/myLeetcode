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

vector<int> postorderTraversal(TreeNode* root)
{
        vector<int> result;
        if(root==nullptr)
                return result;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        while(!s1.empty())
        {
                TreeNode* p = s1.top();
                s1.pop();
                s2.push(p);
                if(p->left!=nullptr)
                        s1.push(p->left);
                if(p->right!=nullptr)
                        s1.push(p->right);
        }
        while(!s2.empty())
        {
                result.push_back(s2.top()->val);
                s2.pop();
        }
        return result;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

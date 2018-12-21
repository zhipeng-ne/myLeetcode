#include <iostream>

using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* invertTree(TreeNode* root)
{
        if (root == nullptr)
                return nullptr;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
}
TreeNode* invertTree1(TreeNode* root)
{
        if (root == nullptr) return root;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
                TreeNode *node = st.top();
                st.pop();
                if (node != nullptr)
                {
                        TreeNode *tmp = node->left;
                        node->left = node->right;
                        node->right = tmp;
                        st.push(node->left);
                        st.push(node->right);
                }
        }

        return root;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

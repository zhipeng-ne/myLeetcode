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
bool isCompleteTree(TreeNode* root)
{
        queue<TreeNode*> treeQueue;
        treeQueue.push(root);
        bool isNull = false;
        while (!treeQueue.empty())
        {
                TreeNode* cur = treeQueue.front();
                treeQueue.pop();
                if (isNull && cur != nullptr)
                        return false;
                if (cur != nullptr)
                {
                        treeQueue.push(cur->left);
                        treeQueue.push(cur->right);
                }
                else
                {
                        isNull = true;
                }


        }
        return true;
}
bool IsCompleteBinaryTree2()
{
        queue<Node *>q;
        q.push(_root);
        Node *cur = q.front();
        //按照层序遍历的办法入队列直到遇到第一个NULL停止
        while (cur)
        {
                q.push(cur->_left);
                q.push(cur->_right);
                q.pop();
                cur = q.front();
        }
        //如果队列中全为NULL则是完全二叉树，否则不是
        while (!q.empty())
        {
                if (q.front())
                        return false;
                q.pop();
        }
        return true;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

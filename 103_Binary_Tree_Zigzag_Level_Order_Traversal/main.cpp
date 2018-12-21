#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<vector<int>> zigzagLevelOrder(TreeNode* root)
{
        vector<vector<int>> result;
        if (root == nullptr)
                return result;
        queue<TreeNode*> treeQueue;
        treeQueue.push(root);
        bool isNeed = false;
        while (!treeQueue.empty())
        {
                vector<int> tmp;
                for (int i = 0, n = treeQueue.size(); i < n; i++)
                {
                        TreeNode* p = treeQueue.front();
                        treeQueue.pop();
                        tmp.push_back(p->val);
                        if (p->left != nullptr)
                                treeQueue.push(p->left);
                        if (p->right != nullptr)
                                treeQueue.push(p->right);
                }
                if (isNeed)
                {
                        reverse(tmp.begin(), tmp.end());
                }
                isNeed= !isNeed;
                result.push_back(tmp);
        }
        return result;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

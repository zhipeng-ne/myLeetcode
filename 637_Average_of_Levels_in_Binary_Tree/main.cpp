#include <iostream>
#include <vector>
using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<double> averageOfLevels(TreeNode* root)
{
        vector<double> result;
        if (root == nullptr)
                return result;
        queue<TreeNode*> treeQueue;
        treeQueue.push(root);
        bool isNeed = false;
        while (!treeQueue.empty())
        {
                double sum=0;
                int n = treeQueue.size();
                for (int i = 0; i < n; i++)
                {
                        TreeNode* p = treeQueue.front();
                        treeQueue.pop();
                        sum+=p->val
                        if (p->left != nullptr)
                                treeQueue.push(p->left);
                        if (p->right != nullptr)
                                treeQueue.push(p->right);
                }
                result.push_back(sum/n);
        }
        return result;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

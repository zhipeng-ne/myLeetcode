#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
        int val = NULL;
        vector<Node*> children;

        Node() {}

        Node(int _val, vector<Node*> _children)
        {
                val = _val;
                children = _children;
        }
};

vector<vector<int>> levelOrder(Node* root)
{
        vector<vector<int>> result;
        if (root == nullptr)
                return result;
        queue<Node*> treeQueue;
        treeQueue.push(root);
        while (!treeQueue.empty())
        {
                vector<int> tmp;
                int n = treeQueue.size();
                for (int i = 0; i < n; i++)
                {
                        Node* p = treeQueue.front();
                        treeQueue.pop();
                        tmp.push_back(p->val);
                        for (int j = 0; j < p->children.size(); j++)
                        {
                                treeQueue.push(p->children[j]);
                        }
                }
                result.push_back(tmp);
        }
        return result;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

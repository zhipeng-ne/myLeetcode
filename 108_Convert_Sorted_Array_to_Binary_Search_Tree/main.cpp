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

TreeNode* sortedArrayToBST(vector<int>& nums)
{
        if(nums.size()==0)
                return nullptr;
        int len = nums.size();
        TreeNode* root = new TreeNode(nums[len/2]);



        return root;
}

int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

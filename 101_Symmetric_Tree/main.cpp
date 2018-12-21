#include <iostream>

using namespace std;
struct TreeNode
{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool isSymmetric(TreeNode* root1,TreeNode* root2)
{
        if(root1==nullptr&&root2==nullptr)
                return true;
        if(root1==nullptr||root2==nullptr)
                return false;
        if(root1->val!=root2->val)
                return false;
        return isSymmetric(root1->left,root2->right)&&isSymmetric(root1->right,root2->left);
}
bool isSymmetric(TreeNode* root)
{
        return isSymmetric(root,root);
}
public boolean isSymmetric1(TreeNode root) {
    if(root==null)  return true;

    Stack<TreeNode> stack = new Stack<TreeNode>();
    TreeNode left, right;
    if(root.left!=null){
        if(root.right==null) return false;
        stack.push(root.left);
        stack.push(root.right);
    }
    else if(root.right!=null){
        return false;
    }

    while(!stack.empty()){
        if(stack.size()%2!=0)   return false;
        right = stack.pop();
        left = stack.pop();
        if(right.val!=left.val) return false;

        if(left.left!=null){
            if(right.right==null)   return false;
            stack.push(left.left);
            stack.push(right.right);
        }
        else if(right.right!=null){
            return false;
        }

        if(left.right!=null){
            if(right.left==null)   return false;
            stack.push(left.right);
            stack.push(right.left);
        }
        else if(right.left!=null){
            return false;
        }
    }

    return true;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}

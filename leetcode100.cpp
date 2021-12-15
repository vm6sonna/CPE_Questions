
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        //root 相同
        if (p == nullptr && q == nullptr)
            return true;
        if (p == nullptr)
            return false;
        if (q == nullptr)
            return false;

        if (p->val != q->val)
        {
            return false;
        }
        // p->left , q->left 相同
        if (isSameTree(p->left, q->left) == false)
            return false;
        // p->right , q->right 相同
        if (isSameTree(p->right, q->right) == false)
            return false;
        return true;
    }
};
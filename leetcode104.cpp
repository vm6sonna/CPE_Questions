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
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        else
        {
            int h_left = maxDepth(root->left);
            int h_right = maxDepth(root->right);
            return max(h_left, h_right) + 1;
        }
    }
};

class Solution2
{
public:
    int maxDepth(TreeNode *root)
    {
        ans = 0;
        dfs(root, 1);
        return ans;
    }
    int ans;
    void dfs(TreeNode *root, int depth)
    {
        if (root == nullptr)
            return;
        ans = max(ans, depth);
        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);
    }
}
}
;
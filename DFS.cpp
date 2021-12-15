#include <vector>

using namespace std;
struct TreeNode
{
    int val;
    // TreeNode *left;
    // TreeNode *right;

    vector<TreeNode *> children;
};
void dfs(TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->val;
    for (int i = 0; i < root->children.size(); i++) // n 元樹
    {
        dfs(root->children[i]);
    }
}
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
class Solution {
public:
    void leaf(TreeNode* root, vector<int> & op) {
        if(root == NULL) return;
        if(root->left != NULL) leaf(root->left, op);
        if(root->right != NULL) leaf(root->right, op);
        if(root->left == NULL && root->right == NULL) op.push_back(root->val);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> op1, op2;
        leaf(root1, op1);
        leaf(root2, op2);
        return op1 == op2;
    }
};
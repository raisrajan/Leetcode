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
 #include <queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> op;
        queue<TreeNode*> temp;
        TreeNode * curr;
        if(root != NULL) q.push(root);
        if(root == NULL) return op;

        while (!q.empty()) {
            while(!q.empty()) {
                temp.push(q.front());
                q.pop();
            }

            vector<int> o;
            while(!temp.empty()) {
                curr = temp.front();
                o.push_back(curr->val);
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
                temp.pop();
            }
            op.push_back(o);
        }
        return op;
    }
};
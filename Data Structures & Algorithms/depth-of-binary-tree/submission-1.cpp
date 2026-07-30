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
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*,int>> stack;
        stack.push({root, 1});
        int res = 0;

        while (!stack.empty()){
            auto current = stack.top();
            stack.pop();
            auto node   = current.first;
            auto count = current. second;

            if (node){
                res = max(res, count);
                stack.push({node->left, count + 1});
                stack.push({node->right, count + 1});
            }            
        }

        return res;
    }
};

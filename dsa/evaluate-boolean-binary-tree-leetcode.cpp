// link : https://leetcode.com/problems/evaluate-boolean-binary-tree/
// type : EASY
// concept : DFS




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
    bool evaluateTree(TreeNode* root) {
       if(root->left==NULL and root->right==NULL){
           return root->val;
       }
        bool eLS = evaluateTree(root->left);
        bool eRS = evaluateTree(root->right);
        bool ans;
        if(root->val ==2) ans = eLS | eRS;
        else ans = eLS & eRS;
        return ans;
    }
};

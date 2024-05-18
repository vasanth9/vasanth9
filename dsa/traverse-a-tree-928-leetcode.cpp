// link : https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/929/
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
    vector<int>v;
    void postRecursiveOrder(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        postRecursiveOrder(root->left);
        postRecursiveOrder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        postRecursiveOrder(root);
        return v;
    }
};

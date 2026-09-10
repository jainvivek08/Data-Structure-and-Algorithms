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
    void add(TreeNode* root, int &sum, int &n){
        if(root==NULL){
            return;
        } 
        sum+=root->val;
        n++;
        add(root->left, sum, n);
        add(root->right, sum, n);
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL) return 0;
        int count=0;
        int sum=0;
        int n=0;
        add(root, sum, n);
        if((sum/n)==root->val) count++;
        return averageOfSubtree(root->left)+averageOfSubtree(root->right)+count;
    }
};
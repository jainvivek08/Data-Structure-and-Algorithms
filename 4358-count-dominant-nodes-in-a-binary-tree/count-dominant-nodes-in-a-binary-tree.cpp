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
    void leaf (TreeNode* root, int & count){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) {
            count++;
            return;
        }
        leaf(root->left, count);
        leaf(root->right, count);
    }
    bool check(TreeNode* root, int data){
        if(root==NULL) return true;
        if(root->val > data) return false;
        return check(root->left, data) && check(root->right, data);
    }
    void maximum (TreeNode* root, int & count){
        if(root==NULL || (root->left==NULL && root->right==NULL)) return ;
        bool ans = check(root, root->val);
        if(ans==true) count++;
        maximum(root->left, count);
        maximum(root->right, count);
    }
    int countDominantNodes(TreeNode* root) {
        int count=0;
        leaf(root, count);
        maximum(root, count);
        return count;
    }
};
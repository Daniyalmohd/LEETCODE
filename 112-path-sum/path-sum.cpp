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
    bool PathSum(TreeNode* root, int targetSum,int sum){
      if(root==NULL){
        return false;
      }
       sum+=root->val;
      if(root->left==NULL && root->right==NULL){
        if(targetSum==sum){
            return true;
        }
        return false;
      }
     
      return  (PathSum( root->left, targetSum,sum)||
              PathSum(root->right, targetSum,sum));
    }
    bool hasPathSum(TreeNode* root, int targetSum){
       int sum = 0;
      return  PathSum(root, targetSum, sum);
    }
};
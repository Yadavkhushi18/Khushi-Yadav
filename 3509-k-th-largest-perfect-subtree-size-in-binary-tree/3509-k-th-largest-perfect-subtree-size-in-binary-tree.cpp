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
    vector<int>ans;
    pair<bool,int>helper(TreeNode* root){
        if(root==NULL){
            return {true,0};
        }
        pair<bool,int>l=helper(root->left);
        pair<bool,int>r=helper(root->right);
        if(l.first && r.first && l.second==r.second ){
            int s=l.second+r.second+1;
            ans.push_back(s);
            return {true,s};
        }
        return {false,0};
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        if(root==NULL){
            return -1;
        }
        ans.clear();
        helper(root);
        sort(ans.begin(),ans.end(),greater<int>());
        if(ans.size()>=k){
            return ans[k-1];
        }
        return -1;
    }
};
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void smallK(TreeNode* A, int& ans, int& k) {
    if(!A) return;
    
    smallK(A->left, ans, k);
    
    k -= 1;
    if(k==0) {
        ans = A->val;
        return;
    }
    
    smallK(A->right,ans,k);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int ans = 0;
    smallK(A,ans,B);
    return ans;
}

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
private:
    int infect(TreeNode* root, int& time, int target) {
        if(!root) return 0;
        if(root->val==target) return -1;

        int left = infect(root->left,time,target);
        int right = infect(root->right,time,target);

        if(left<0) {
            time = max(time,abs(left)+right);
            return left-1; 
        }
        if(right<0) {
            time = max(time,abs(right)+left);
            return right-1;
        }

        return 1+max(left,right);
    }

    void find(TreeNode* root, TreeNode* &BurnNode, int target) {
        if(!root) return;
        if(root->val==target) {
            BurnNode = root;
            return;
        }
        find(root->left,BurnNode,target);
        find(root->right,BurnNode,target);
    }

    int height(TreeNode* BurnNode) {
        if(!BurnNode) return -1;
        return 1+max(height(BurnNode->left),height(BurnNode->right));
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        int ans = 0;
        infect(root,ans,start);

        //find that node
        TreeNode* BurnNode = nullptr;
        find(root,BurnNode,start);

        int heigh = height(BurnNode);

        return max(heigh,ans);
    }
};

class Solution {
private:
    int dfs(TreeNode* root, long long sum, int target, unordered_map<long long, int>& map) {
        if (!root) return 0;

        sum += root->val;
        int count = map[sum-target];

        map[sum]++;

        count += dfs(root->left, sum, target, map);
        count += dfs(root->right, sum, target, map);

        map[sum]--;  

        return count;
    }

public:
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long,int> map;
        map[0] = 1;  
        return dfs(root, 0, targetSum, map);
    }
};

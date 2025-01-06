class Solution {
public:
    vector<int> minOperations(string boxes) {
        // O(n) time and O(n) space
        int n = boxes.size();
        vector<int> pre(n,0);
        vector<int> suff(n,0);
        vector<int> ans(n,0);

        int sum = 0;
        int count = 0;
        for(int i=1;i<n;i++) {
            if(boxes[i-1]=='1') count++;
            sum += count;
            pre[i] = sum;
        }

        sum=0,count=0;
        for(int i=n-2;i>=0;i--) {
            if(boxes[i+1]=='1') count++;
            sum += count;
            suff[i] = sum;
        }

        for(int i=0;i<n;i++) {
            ans[i] = pre[i] + suff[i];
        }

        return ans;
    }
};

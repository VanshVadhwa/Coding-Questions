class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        priority_queue<int> maxHeap(gifts.begin(),gifts.end());
        long long ans = 0;

        for(int i=0;i<k;i++) {
            int num = sqrt(maxHeap.top());
            maxHeap.pop();
            maxHeap.push(num);
        }

        for(int i=0;i<n;i++) {
            ans += maxHeap.top();
            maxHeap.pop();
        }
 
        return ans;
    }
};

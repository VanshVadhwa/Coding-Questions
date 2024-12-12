class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        priority_queue<int> maxHeap(gifts.begin(),gifts.end());
        long long ans = accumulate(gifts.begin(),gifts.end(),0LL);

        for(int i=0;i<k;i++) {
            int num = sqrt(maxHeap.top());
            ans += num;
            ans -= maxHeap.top();
            maxHeap.push(num);
            maxHeap.pop();
        }

        return ans;
    }
};

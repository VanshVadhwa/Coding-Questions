class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        // pushing the positions as third column
        for(int i=0;i<n;i++)
        tasks[i].push_back(i);

        // sorting based on enter time
        sort(tasks.begin(), tasks.end());

        // creating a min heap to access processes in O(log n) time when multiple are avaiable at a particular instance
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        vector<int> ans;
        int i = 0;
        long long timer = tasks[0][0];
        while(!pq.empty() || i < n)
        {
            while(i<n && timer >= tasks[i][0]) {
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }

            if(pq.empty()) {
                timer = tasks[i][0];
            }

            else {
                ans.push_back(pq.top().second);
                timer += pq.top().first;
                pq.pop();
            }
        }

        return ans;
    }
};

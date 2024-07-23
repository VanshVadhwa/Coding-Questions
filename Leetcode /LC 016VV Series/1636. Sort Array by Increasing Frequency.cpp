class Solution {
private:
    static bool customComparator(vector<int>& a, const vector<int>& b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    }

public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> map;

        for(int i : nums)
        {
            map[i]++;
        }

        vector<vector<int>> ans;
        for(auto it : map)
        {
            ans.push_back({it.second, it.first});
        }

        sort(ans.begin(), ans.end(), customComparator);


        vector<int> answer;
        for(auto v : ans)
        {
            for(int i=0;i<v[0];i++)
            {
                answer.push_back(v[1]);
            }
        }

        return answer;
    }
};

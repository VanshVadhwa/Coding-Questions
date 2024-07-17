class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n= nums.size();
        
        if(k==0) {
            unordered_map<int, int> counting;
        for (int i : nums) {
            counting[i]++;
        }

        int count = 0;
        for (auto& pair : counting) {
            if (k == 0) 
            {
                if (pair.second > 1) {
                    count++;
                }
            } 
            else 
            {
                if (counting.find(pair.first + k) != counting.end()) {
                    count++;
                }
            }
        }

        return count;
        }

        unordered_set<int> set;
        for(int i=0;i<n;i++) {
            set.insert(nums[i]);
        }
        vector<int> arr(set.begin(), set.end());
        sort(arr.begin(),arr.end());
        int start = 0, end = 1;
        int count = 0;

        while(end<arr.size())
        {
            if(arr[end]-arr[start]==k) {
                count++;
                start++;
                end++;
            }
            else if(arr[end]-arr[start]>k) {
                start++;
            }
            else {
                end++;
            }
            if(start==end) {
                end++;
            }
        }
        return count;
    }
};

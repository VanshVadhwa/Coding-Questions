class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;        
        int n = arr.size();


        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }

        for(string s : arr)
        {
            if(map[s]==1) {
                k--;
                if(k==0) {
                    return s;
                }
            }
        }
        return "";
    }
};

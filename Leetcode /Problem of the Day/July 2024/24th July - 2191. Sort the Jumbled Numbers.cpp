class Solution {
private:
    void merge(vector<int>& names, vector<int>& heights, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L_names, R_names, L_heights, R_heights;

        for (int i = 0; i < n1; i++) {
            L_names.push_back(names[left + i]);
            L_heights.push_back(heights[left + i]);
        }
        for (int j = 0; j < n2; j++) {
            R_names.push_back(names[mid + 1 + j]);
            R_heights.push_back(heights[mid + 1 + j]);
        }

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L_heights[i] <= R_heights[j]) {
                names[k] = L_names[i];
                heights[k] = L_heights[i];
                i++;
            } else {
                names[k] = R_names[j];
                heights[k] = R_heights[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            names[k] = L_names[i];
            heights[k] = L_heights[i];
            i++;
            k++;
        }

        while (j < n2) {
            names[k] = R_names[j];
            heights[k] = R_heights[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>& names, vector<int>& heights, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(names, heights, left, mid);
            mergeSort(names, heights, mid + 1, right);
            merge(names, heights, left, mid, right);
        }
    }

public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();

        vector<string> s(n);

        for(int i = 0; i < n; i++) {
            s[i] = to_string(nums[i]);
        }

        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            string temp = "";
            for(int j = 0; j < s[i].size(); j++) {
                temp += to_string(mapping[stoi(s[i].substr(j, 1))]);
            }
            ans[i] = stoi(temp);
        }

        mergeSort(nums, ans, 0, n - 1);

        return nums;
    }
};

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // O(nlogn) Time and O(1) space
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++) {
            int start = 0;
            int end = n-1;
            int target = arr[i]*2;
            //binary search
            while(start <= end) {
                int mid = start + (end-start)/2;
                if(arr[mid]==target && mid!=i) {
                    return true;
                }
                else if(arr[mid]<=target) {
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
            }
        }

        return false;

        // O(n) Time and O(n) Space
        // unordered_map<int,int> map;
        // for(int i : arr) {
        //     map[i]++;
        // }

        // for(int i : arr) {
        //     if(i==0) {
        //         if(map[i]>1) return true;
        //     }
        //     else if (map[i*2]>0) return true;
        // } 

        // return false;
    }
};

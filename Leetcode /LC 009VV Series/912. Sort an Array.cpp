class Solution {
private:
    void merge(vector<int>& arr, int start, int mid, int end)
    {
        vector<int> temp(end-start+1);
        int left = start;
        int right = mid+1;
        int index = 0;

        // using two pointers
        while(left <= mid && right <= end)
        {
            if(arr[left]<=arr[right])
            {
                temp[index] = arr[left];
                left++;
                index++;
            }
            else 
            {
                temp[index] = arr[right];
                index++;
                right++;
            }
        }

        while(left <= mid) {
            temp[index] = arr[left];
            index++;
            left++;
        }
        while(right <= end) {
            temp[index] = arr[right];
            index++;
            right++;
        }
        index = 0;
        while(start <= end) 
        {
            arr[start] = temp[index];
            start++;
            index++;
        }
    }

    void mergeSort(vector<int>& arr, int start, int end)
    {
        //base case
        if(start==end) {
            return;
        }
        int mid = start + (end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};

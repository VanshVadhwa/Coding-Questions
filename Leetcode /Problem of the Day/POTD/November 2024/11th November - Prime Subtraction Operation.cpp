class Solution {
private:
    bool isPrime(int n) {
        if(n<=1) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i*i<=n;i+=6) {
            if(n%i==0 || n%(i+2)==0) {
                return false;
            }
        }
        return true;
    }

    void primeArrayCreation(vector<int>& prime, int maxi) {
        for(int i=2;i<maxi;i++) {
            if(isPrime(i)) {
                prime.push_back(i);;
            }
        }
    }

    int binarySearch(vector<int>& prime, int target, int prev) {
        int n = prime.size();
        int start = 0;
        int end = n-1;
        int ans = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(prime[mid]<target && target-prime[mid]>prev) {
                ans = prime[mid];
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
    }

public:
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int> prime;
        primeArrayCreation(prime,maxi);
        
        for(int i=0;i<n;i++) {
            int prev = (i==0) ? 0 : nums[i-1];
            if(nums[i]<=prev) return false;
            int primeNo = binarySearch(prime,nums[i],prev);
            nums[i] = primeNo==-1 ? nums[i] : nums[i]-=primeNo;
        }

        for(int i=0;i<n-1;i++) {
            if(nums[i]>nums[i+1]) return false;
        }

        return true;
    }
};

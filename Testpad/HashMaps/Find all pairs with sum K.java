class Result {
  static int getPairsCount(int arr[], int n, int k) {
	// Write your code here
   int ans = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        for (int i = 0; i < n; i++) {
            int complement = k - arr[i];
            if (map.containsKey(complement)) {
                ans += map.get(complement);
                if (complement == arr[i]) {
                    ans--;
                }
            }
        }
        return ans / 2;
  }
}

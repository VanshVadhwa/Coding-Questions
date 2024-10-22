class Result {
  static int getPairsCount(int arr[], int n, int k) {
	// Write your code here
    HashMap<Integer,Integer> map = new HashMap<>();
    
    for(int i : arr) {
      map.put(i, map.getOrDefault(i,0) + 1);
    }
    
    int ans = 0;
    
    for(int i : arr) {
      int complement = k+i;
      if(map.containsKey(complement)) {
        ans += 1;
      }
    }
    
    return ans;
  }
}

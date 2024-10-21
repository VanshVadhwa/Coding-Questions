class Result {
  static int getPairsCount(int arr[], int n, int k) {
	// Write your code here
    HashMap<Integer, Integer>map = new HashMap<>();
    for(int i : arr)
    {
      map.put(i,map.getOrDefault(i,0)+1);
    }
    
    int ans = 0;
    
    for(int num : arr)
    {
      int complement = k - num;
      if(map.containsKey(complement)) {
        ans+=map.get(complement);
      }
      if(num==complement) {
        ans -= 1;
      }
    }
    return ans/2;
  }
}

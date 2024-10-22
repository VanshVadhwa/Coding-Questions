class Result {
  static int maxFrequency(int A[], int n) {
	// Write your code here
    HashMap<Integer,Integer> map = new HashMap<>();
    int maxi = 0;
    
    for(int i : A) {
      map.put(i,map.getOrDefault(i,0)+1);
      maxi = Math.max(maxi,map.get(i));
    }
    
    int ans = 10000;
    
    for(int i : A) {
      if(map.get(i)==maxi) {
        ans = Math.min(ans,i);
      }
    }
    
    return ans;
  }
}

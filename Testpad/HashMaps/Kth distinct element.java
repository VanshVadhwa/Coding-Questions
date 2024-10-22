class Result {
  static int kthDistinctElement(int arr[], int N, int K) {
	// Write your code here
    HashMap<Integer,Integer> map = new HashMap<>();
    
    for(int i : arr) {
      map.put(i, map.getOrDefault(i,0)+1);
    }
    
    int count = 0;
    
    for(int i : arr) {
      if(map.get(i)==1) {
        count++;
        if(count==K) {
          return i;
        }
      }
    }
    return 0;
  }
}

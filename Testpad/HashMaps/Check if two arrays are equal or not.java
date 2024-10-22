class Result {
  static int arraysEqualorNot(int[] A, int[] B) {
    // Write your code here
    int n1 = A.length;
  	int n2 = B.length;
  	if(n1 != n2) {
    	return 0;
  	}	
    
    HashMap<Integer,Integer> map = new HashMap<>();
    for(int i : A) {
      map.put(i, map.getOrDefault(i,0)+1);
    }
    
    for(int i : B) {
      map.put(i, map.getOrDefault(i,0)-1);
    }
    
    for(int i : A) {
      if(map.get(i)>0) {
        return 0;
      }
    }
    
    return 1;
  }
}

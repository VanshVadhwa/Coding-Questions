class Result {
  static void countFrequency(String str) {
    // Write your code here
    HashMap<Character,Integer> map = new HashMap<>();
    
    for(char c : str.toCharArray()) {
      map.put(c, map.getOrDefault(c,0)+1);
    }
    
    boolean[] marked = new boolean[26];
    
    for(char c : str.toCharArray()) {
      if(marked[c-'a'] == false) {
         System.out.print(c + "" + map.get(c) + " ");
      }
      marked[c-'a'] = true;
    }
    
  }
}

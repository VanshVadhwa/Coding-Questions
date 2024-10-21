class Result {
  // Return the updated string
  static String getDesiredString(String str) {
    // Write your code here
    HashMap<Character, Integer> map = new HashMap<>();
    for(char c : str.toCharArray()) {
      map.put(c, map.getOrDefault(c,0)+1);
    }
    StringBuilder ans = new StringBuilder();
    for(char c : str.toCharArray()) {
      if(map.get(c)>0) {
        ans.append(c);
      }
      map.put(c,0);
    }
    return ans.toString();
  }
}

class Result{
  /*     
   * Complete the 'inspectStrings' function below.
   * @params
   *   words -> A string array, which contains the strings
   *  
   * @return
   *   A String, which occurs the maximum numbers of times
   */
  static String inspectStrings(String[] words) {
    // Write your code here
    HashMap<String,Integer> map = new HashMap<>();
    int maxi = 0;
    
    for(String word : words) {
      map.put(word, map.getOrDefault(word,0)+1);
      maxi = Math.max(maxi,map.get(word));
    }
    
    String ans = "";
    for(String word : words) {
      if(map.get(word)==maxi && word.compareTo(ans)>0) {
        ans = word;
      }
    }
    
    return ans;
  }
}

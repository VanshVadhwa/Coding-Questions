class Result {
  static String revWordsOrder(String str) {
    // Write your code here
    String[] words = str.split(" ");
    StringBuilder ans = new StringBuilder();
    for(int i=words.length-1;i>=0;i--) {
      ans.append(words[i]);
      if(i!=0) {
        ans.append(" ");
      }
    }
    return ans.toString();
  }
}

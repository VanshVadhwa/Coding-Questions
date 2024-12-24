class Result {
  // Return the updated string
  static String getDesiredString(String str) {
    // Write your code here
      String ans = str.substring(0,1);
      for(int i=1;i<str.length();i++) {
          if(str.charAt(i) != str.charAt(i-1)) {
              ans += str.charAt(i);
          }
      }
      
      return ans;
  }
}

// class Result {
//   // Return the updated string
//   static String getDesiredString(String str) {
//     // Write your code here
//     HashMap<Character, Integer> map = new HashMap<>();
//     for(char c : str.toCharArray()) {
//       map.put(c, map.getOrDefault(c,0)+1);
//     }
//     StringBuilder ans = new StringBuilder();
//     for(char c : str.toCharArray()) {
//       if(map.get(c)>0) {
//         ans.append(c);
//       }
//       map.put(c,0);
//     }
//     return ans.toString();
//   }
// }

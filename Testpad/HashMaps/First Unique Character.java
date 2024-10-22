import java.util.HashMap;
class Result {
  static int firstUniqueChar(String str) {
    // Write your code here
    HashMap<Character,Integer> map = new HashMap<>();
    
    for(char c : str.toCharArray()) {
      map.put(c, map.getOrDefault(c,0)+1);
    }
    
    for(int i=0;i<str.length();i++) {
      if(map.get(str.charAt(i))==1) {
        return i;
      }
    }
    return -1;
  }
}

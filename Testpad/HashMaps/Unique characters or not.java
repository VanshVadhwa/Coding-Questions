import java.util.HashMap;
class Result{
  // Return true if string contains all unique characters, else return false
  static boolean isUniqueChars(String str){
    // Write your code here
    HashMap <Character,Integer> map = new HashMap<>();
    
    for(char c : str.toCharArray()) {
      map.put(c, map.getOrDefault(c,0)+1);
      if(map.get(c)>1) return false;
    }
    return true;
  }
}

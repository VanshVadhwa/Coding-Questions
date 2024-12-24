class Result {
  static String itoa(int num) {
    // Write your code here
    if(num==0) return "0";
    StringBuilder ans = new StringBuilder();
    while(num != 0) {
        ans.append(num%10);
        num /= 10;
    }
    return ans.reverse().toString();
  }

  static int atoi(String str) {
    // Write your code here
      int ans = 0;
      for(char c : str.toCharArray()) {
          ans = ans*10 + (c-'0');
      }
      return ans;
  }
}

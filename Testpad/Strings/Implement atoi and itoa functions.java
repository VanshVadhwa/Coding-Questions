class Result {
  static String itoa(int num) {
    // Write your code here
    StringBuilder ans = new StringBuilder();
    if(num==0) ans.append(0);
    while(num!=0){
      ans.append(num%10);
      num /= 10;
    }
    return ans.reverse().toString();
  }

  static int atoi(String str) {
    // Write your code here
    int ans = 0;
    int index = 0;
    while(index!=str.length()) {
      int digit = str.charAt(index)-'0';
      ans = ans*10 + digit;
      index++;
    }
    return ans;
  }
}

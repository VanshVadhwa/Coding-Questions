class Result {
  static int countWords(String str) {
	// Write your code here
    if(str.length()==0) {
      return 0;
    }
    int ans = 1;
    for(int i=0;i<str.length();i++)
    {
      if(str.charAt(i)==' ') {
        ans++;
        while(str.charAt(i)==' ') {
          i++;
        }
      }
    }
    return ans;
  }
}

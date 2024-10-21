class Result{
  // Return true if the str2 is a subsequence of str1, else return false
  static boolean strSubsequence(String str1, String str2) {
    // Write your code here
    int n1 = str1.length();
    int n2 = str2.length();
    int index1 = 0;
    int index2 = 0;
    while(index1 < n1 && index2 < n2)
    {
      if(str1.charAt(index1)==str2.charAt(index2)) {
        index2++;
      }
      index1++;
    }
    if(index2==n2) {
      return true;
    }
    return false;
  }
}

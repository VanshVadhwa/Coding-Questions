class Result {
  // return 1 for YES and 0 for NO.
  static int isRotation(String str1, String str2) {
    // Write your code here
    int n1 = str1.length();
    int n2 = str2.length();
    if(n1 != n2) {
      return 0;
    }
    String total = str1 + str1;
    if(total.contains(str2)) {
      return 1;
    }
    return 0;
  }
}

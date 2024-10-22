class Result {
  // Return true if a pair with the sum k is found, else return false
  static boolean pairSum(int arr[], int n, int k) {
	// Write your code here
    
    //enough of HashMap now maybe, let's do it with two pointers
    int start = 0;
    int end = n-1;
    
    while(start < end)
    {
      int sum = arr[start] + arr[end];
      if(sum==k) {
        return true;
      }
      if(sum < k) {
        start++;
      }
      else {
        end--;
      }
    }
    return false;
  }
}

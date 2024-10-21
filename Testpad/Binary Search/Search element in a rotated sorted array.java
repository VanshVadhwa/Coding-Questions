class Result {
  static int searchRotatedSortedArray(int arr[], int k) {
    // Write your code here
    int n = arr.length;
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
      int mid = start + (end-start)/2;
      if(arr[mid]==k) {
        return mid;
      }
      else if(arr[start]<=arr[mid])
      {
        if(arr[start]<=k && arr[mid]>=k) 
        {
          end = mid-1;
        }
        else {
          start = mid+1;
        }
      }
      else {
        if(arr[mid]<=k && k<=arr[end])
        {
          start = mid+1;
        }
        else {
          end = mid-1;
        }
      }
    }
    return -1;
  }
}

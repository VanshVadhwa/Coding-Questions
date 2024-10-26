static int isMaxHeap(int arr[], int n){
  // Write your code here
  for(int i=0;i<=(n-2)/2;i++)
  {
    int leftChildIndex = 2*i+1;
    int rightChildIndex = 2*i+2;
    if(leftChildIndex < n && arr[i]<arr[leftChildIndex]) {
      return 0;
    }
    if(rightChildIndex < n && arr[i]<arr[rightChildIndex]) {
      return 0;
    }
  }
  return 1;
}

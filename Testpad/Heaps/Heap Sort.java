class Result {
  static void swap(int[] arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  static void heapify (int arr[], int n, int i) {
    // Write your code here
    	int largest = i; 
        int left = 2 * i + 1; 
        int right = 2 * i + 2; 
        // If left child is larger than root
        if (left < n && arr[left] > arr[largest]) {
            largest = left;
        }
        // If right child is larger than largest so far
        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }
        // If largest is not root
        if (largest != i) {
            swap(arr,i,largest);
            heapify(arr, n, largest);
        }
  }
  static void heapSort(int arr[], int n) {
    // Write your code here
    for(int i=n/2-1;i>=0;i--) {
      heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--) {
      swap(arr,0,i);
      heapify(arr,i,0);
    }
  }
}

//for swap
static void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
//for max-heap
static void heapify(int arr[], int n, int i) {
  int largest = i;
  int left = 2*i + 1;
  int right = 2*i + 2;
  
  if(left<n && arr[left]>arr[largest]) {
    largest = left;
  }
  if(right<n && arr[right]>arr[largest]) {
    largest = right;
  }
  
  if(largest!=i) {
    swap(arr,largest,i);
    heapify(arr,n,largest);
  }
}

//sorting the array
static void sortedHeap(int arr[], int n) {
  //max heap created
  for(int i=n/2-1;i>=0;i--) {
    heapify(arr,n,i);
  }
  
  for(int i=n-1;i>0;i--) {
    swap(arr,i,0);
    heapify(arr,i,0);
  }
}

static void printKLargest(int arr[], int n, int k){
	// Write your code here
  sortedHeap(arr,n);
  for(int i=n-1;i>=0;i--) {
    if(i==n-k) {
      System.out.print(arr[i]);
      break;
    }
    System.out.print(arr[i] + " ");
  }
}

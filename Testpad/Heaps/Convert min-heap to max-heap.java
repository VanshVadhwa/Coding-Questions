static void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
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
  
  if(largest != i) {
    swap(arr,largest,i);
    heapify(arr,n,largest);
  }
}
static void modifyMintoMax(int array[], int n)
{
  for(int i=n-1;i>=0;i--) {
    heapify(array,n,i);
  }
}

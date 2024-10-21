import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
  	static int binarySearch(int[] arr, int n, int target) {
      int start = 0;
      int end = n-1;
      int index = -1;
      while(start <= end)
      {
        int mid = start + (end-start)/2;
        if(arr[mid]==target) {
          index = mid;
          end = mid-1;
        }
        else if(arr[mid]<target) {
          start = mid+1;
        }
        else {
          end = mid-1;
        }
      }
      return index;
    }
    public static void main(String[] args)
    {
      // Write your code here
      Scanner input = new Scanner(System.in);
      int t = input.nextInt();
      while(t-- > 0)
      {
        int n = input.nextInt();
        int target = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++) {
          arr[i] = input.nextInt();
        }
        int ans = binarySearch(arr,n,target);
        System.out.println(ans);
      }
      input.close();
    }
}

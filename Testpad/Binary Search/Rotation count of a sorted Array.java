import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
  	static int count(int[] arr, int n)
    {
      int start = 0;
      int end = n-1;
      
      if(arr[end]>=arr[start]) {
        return -1;
      }
      
      while(start <= end)
      {
        int mid = start + (end-start)/2;
        
        if(mid>0 && arr[mid]<arr[mid-1]) {
          return mid;
        }
        else if(arr[start]<=arr[mid]) {
          start = mid+1;
        }
        else {
          end = mid-1;
        }
      }
      return -1;
    }
    public static void main(String[] args)
    {
        // Write your code here
      	Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t-- > 0)
        {
          int n = input.nextInt();
          int[] arr = new int[n];
          for(int i=0;i<n;i++) {
            arr[i] = input.nextInt();
          }
          int ans = count(arr,n);
          System.out.println(ans);
        }
        input.close();
    }
}

import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main {
    private static int rotationCount(int arr[], int n) {
        // peak index find
        if(n>1 && arr[0]>arr[1]) return 1;
        int ans = arr[0];
        int start = 0;
        int end = n-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid]>=arr[0]) {
                ans = mid+1;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
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
            if(arr[n-1]>=arr[0]) System.out.println(-1);
            else System.out.println(rotationCount(arr,n));
        }
        input.close();
    }
}

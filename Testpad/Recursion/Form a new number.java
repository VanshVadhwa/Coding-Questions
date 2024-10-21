import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
  	static int evenNum(int n)
    {
      //base case
      if(n==0) {
        return 0;
      }
      
      int ans = evenNum(n/10);
      
      if((n%10)%2==0) {
        ans = ans*10 + (n%10);
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
          int ans = evenNum(n);
      	  System.out.println(ans);
        }  
      	input.close();
    }
}

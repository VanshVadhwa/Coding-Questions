import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
  	static int sum(int n)
    {
      //base case
      if(n<10) {
        return n;
      }
      return n%10 + sum(n/10);
    }
    public static void main(String[] args)
    {
        // Write your code here
      	Scanner input = new Scanner(System.in);
      	int t = input.nextInt();
      	while(t-- > 0)
        {
          int n = input.nextInt();
          int temp = n;
          if(n<0) n*=-1;
          int ans = sum(n);
          if(temp<0) {
            System.out.println(ans*-1);
          }
          else {
            System.out.println(ans);
          }
        }
      	input.close();
    }
}

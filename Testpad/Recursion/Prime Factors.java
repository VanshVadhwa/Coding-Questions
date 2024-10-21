import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
  	static void primeFactors(int n , int factor)
    {
      //base case
      if(n==1) {
        return;
      }
      
      if(n%factor==0) {
        System.out.println(factor);
        primeFactors(n/factor,factor);
      }
      else {
        primeFactors(n,factor+1);
      }
    }
    public static void main(String[] args)
    {
        // Write your code here
      	Scanner input = new Scanner(System.in);
      	int n = input.nextInt();
      	primeFactors(n,2);
      	input.close();
    }
}

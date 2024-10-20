class Result{
  /*
   * Complete the function 'factorial' given below
   * @params
   *  n -> an integer whose factorial is to be calculated
   * @return
   *  The factorial of integer n
   */
  static int factorial(int n) {
    // Write your code here
    if(n==1 || n==0) {
      return 1;
    }
    return n*factorial(n-1);
  }
}

class Main{
    public static void main(String[] args){
      Scanner in = new Scanner(System.in);
      int t = in.nextInt();
      while(t-- > 0){
        int n = in.nextInt();
        System.out.println(Result.factorial(n));
      }
    }
}

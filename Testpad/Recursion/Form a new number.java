import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main {
    private static int formNumber(int n, int base) {
        if(n==0) return 0;
        
        if(n%2==0) {
            return n%10*base + formNumber(n/10,base*10);
        }
        return formNumber(n/10,base);
    }
    public static void main(String[] args)
    {
        // Write your code here
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        
        while(t-- > 0) {
            int n = input.nextInt();
            System.out.println(formNumber(n,1));
        }
        
        input.close();
    }
}

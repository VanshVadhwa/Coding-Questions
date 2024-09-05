class Solution {
    public int count(int a, int b) {
        if(a==0 || b==0) {
            return 0;
        }
        if(a%b==0) return a/b;
        int ans = a/b;
        a = a-(b*ans); 
        while(a!=0 && b!=0) {
            if(a>=b) {
                a -= b;
                ans++;
            }
            else {
                b -= a;
                ans++;
            }
        }
        return ans;
    }
    public int countOperations(int num1, int num2) {
        int ans = 0;
        if(num1>num2) {
            ans = count(num1,num2);
        }
        else {
            ans = count(num2,num1);
        }
        return ans;
    }
}

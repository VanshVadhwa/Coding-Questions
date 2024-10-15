class Solution {
private:
    int winner(int n, int k) {
        //base case
        if(n==1) {
            return 0;
        }
        return (winner(n-1,k)+k)%n;
    }
public:
    int findTheWinner(int n, int k) {
        return winner(n,k)+1;
    }
};

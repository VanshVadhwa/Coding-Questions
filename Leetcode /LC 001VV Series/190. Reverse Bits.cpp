int reverseBits(int n) {
    unsigned int ans = 0;
    for(int i=0;i<31;i++) {
        ans = ans*2 + (n%2);
        n /= 2;
    }
    return ans*2;
}

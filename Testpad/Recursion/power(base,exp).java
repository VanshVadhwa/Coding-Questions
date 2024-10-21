class Result {
  	static long powerAns(int base, int exp)
    {
      if(exp==0) {
        return 1;
      }
      return base * powerAns(base, exp-1);
    }
    static long power(int base, int exp) {
      // Write your code here
      if(exp<0) return -1;
      return powerAns(base,exp);
	}
}

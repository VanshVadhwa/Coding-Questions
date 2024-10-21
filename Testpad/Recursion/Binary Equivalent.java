class Result{ 
  	static int binary(int n)
    {
      //base case
      if(n<2) {
        return n;
      }
      return binary(n/2)*10 + n%2;
    }
    static int decimalToBinary(int n){ 
      return binary(n);
    } 
}

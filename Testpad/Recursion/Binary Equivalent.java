class Result{ 
    static int decimalToBinary(int n){
        if(n<2) return n;
        return decimalToBinary(n/2)*10 + n%2;
    } 
}

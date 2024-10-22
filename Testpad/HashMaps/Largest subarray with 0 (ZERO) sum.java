class Result
{
  static int slide(int arr[], int n)
  { 
    HashMap<Integer,Integer> map = new HashMap<>();
    int sum = 0;
    int ans = -1;
    
    for(int i=0;i<n;i++)
    {
      sum += arr[i];
      if(sum==0) {
        ans = i+1;
      }
      if(map.containsKey(sum)) {
        int length = i - map.get(sum);
        ans = Math.max(ans, length);
      }
      else {
        map.put(sum,i);
      }
    }
    return ans;
  }
  static int largSubArray(int ar[], int n){
    // Write your code here
    return slide(ar,n);
  }
}

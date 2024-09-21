class Solution {
    public String reverseStr(String s, int k) {
        char[] chars = s.toCharArray();
        int left = 0;
        int right = Math.min(s.length(), k);

        while(left < s.length())
        {
            reverse(chars,left,right-1);
            left += 2*k;
            right = Math.min(left+k,s.length());
        }

        return new String(chars);
    }

    private void reverse(char[] chars, int start, int end)
    {
        while(start < end)
        {
            char temp = chars[start];
            chars[start] = chars[end];
            chars[end] = temp;
            start++;
            end--;
        }
    }
}

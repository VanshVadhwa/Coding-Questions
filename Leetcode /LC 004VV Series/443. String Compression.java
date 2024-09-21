class Solution {
    public int compress(char[] chars) {
        int index = 0;

        for(int i=0;i<chars.length;)
        {
            final char letter = chars[i];
            int count = 0;

            while(i<chars.length && letter == chars[i]) 
            {
                i++;
                count++;
            }

            chars[index] = letter;
            index = index + 1;

            if(count>1) 
            {
                String str = Integer.toString(count);
                for(int j=0;j<str.length();j++) {
                    chars[index] = str.charAt(j);
                    index = index+1;
                }
            }
        }

        return index;
    }
}

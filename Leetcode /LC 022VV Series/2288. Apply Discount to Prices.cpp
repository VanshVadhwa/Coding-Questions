class Solution {
    public String discountPrices(String sentence, int discount) {
        String[] words = sentence.split("\\s+");
        StringBuilder ans = new StringBuilder();
        double discountFactor = 1 - (discount / 100.0); 

        for (String word : words) {
            if (word.length() > 1 && word.charAt(0) == '$' && isValidPrice(word.substring(1))) {
                    double originalPrice = Double.parseDouble(word.substring(1));
                    double discountedPrice = originalPrice * discountFactor;
                    ans.append(String.format("$%.2f", discountedPrice)).append(" ");
            } 
            else {
                ans.append(word).append(" ");
            }
        }

        return ans.toString().trim();  
    }

    private boolean isValidPrice(String price) {
        for (char c : price.toCharArray()) {
            if (!Character.isDigit(c) && c != '.') {
                return false;  
            }
        }
        return true;
    }
}

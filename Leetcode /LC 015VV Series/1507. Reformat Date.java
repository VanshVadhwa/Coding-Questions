class Solution {
    String Month(String month)
    {
        if(month.equals("Jan")) return "01";
        if(month.equals("Feb")) return "02";
        if(month.equals("Mar")) return "03";
        if(month.equals("Apr")) return "04";
        if(month.equals("May")) return "05";
        if(month.equals("Jun")) return "06";
        if(month.equals("Jul")) return "07";
        if(month.equals("Aug")) return "08";
        if(month.equals("Sep")) return "09";
        if(month.equals("Oct")) return "10";
        if(month.equals("Nov")) return "11";
        if(month.equals("Dec")) return "12";
        else return "";
    }
    public String reformatDate(String date) {
        int n = date.length();
        String Date = "";
        String month = "";
        String year = "";

        if(n==13) {
            Date = date.substring(0,2);
            month = date.substring(5,8);
            year = date.substring(9,13);
        }

        else {
            Date = '0' + date.substring(0,1);
            month = date.substring(4,7);
            year = date.substring(8,12);
        }
 
        return year + '-' + Month(month) + '-' + Date;
    }
}

string longestPrefixSuffix(string &str){
    // Write your code here.
    int n = str.length();
    vector<int> lps(n,0);
    int pref = 0, suff = 1;

    while(suff < n)
    {
        if(str[suff] == str[pref]) 
        {
            lps[suff] = pref+1;
            suff++;
            pref++;
        }

        else 
        {
            if(pref == 0)
            {
                lps[suff] = 0;
                suff++;
            }
            else
            {
                pref = lps[pref-1];
            }
        }
    }
    return str.substr(0, lps[n-1]);
}

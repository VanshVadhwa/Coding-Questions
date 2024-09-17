class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        vector<string> arrS1;
        vector<string> arrS2;
        bool flag = false;

        string temp = "";

        //inserting s1 words to array
        for(int i=0;i<len1;i++)
        {
            if(s1[i]==' ' || i==len1-1) {
                if(i==len1-1) {
                    temp += s1[i];
                    flag = true;
                } 
                arrS1.push_back(temp);
                temp.clear();
                if(flag) break;
            }
            else
                temp += s1[i];
        }

        //inserting s1 words to array
        flag = false;
        for(int i=0;i<len2;i++)
        {
            if(s2[i]==' ' || i==len2-1) {
                if(i==len2-1) {
                    temp += s2[i];
                    flag = true;
                } 
                arrS2.push_back(temp);
                temp.clear();
                if(flag) break;
            }
            else
                temp += s2[i];
        }

        //checking if anyone is duplicate
        unordered_map<string,int> map1;
        for(string s : arrS1) {
            map1[s]++; 
        }

        unordered_map<string,int> map2;
        for(string s : arrS2) {
            map2[s]++; 
        }

        //creating final answer
        vector<string> ans;
        for(int i=0;i<arrS1.size();i++)
        {
            string temp1 = arrS1[i];
            if(map1[temp1]==1 && map2[temp1]==0) {
                ans.push_back(temp1);
            }
        }

        for(int i=0;i<arrS2.size();i++)
        {
            string temp2 = arrS2[i];
            if(map2[temp2]==1 && map1[temp2]==0) {
                ans.push_back(temp2);
            }
        }

        return ans;
    }
};

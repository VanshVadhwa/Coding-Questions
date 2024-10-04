class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int rows = items.size();

        for(int i=0;i<rows;i++)
        {
            if(ruleKey == "type" && ruleValue == items[i][0]) {
                count += 1;
            }
            else if(ruleKey == "color" && ruleValue == items[i][1]) {
                count += 1;
            }
            else if(ruleKey == "name" && ruleValue == items[i][2]) {
                count += 1;
            }
        }

        return count;
    }
};

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        for(int i=n-1;i>=1;i--)
        {
            int index = i;

            for(int j=i-1;j>=0;j--)
            {
                if(heights[j]<heights[index]) index = j;
            }

            swap(names[index], names[i]);
            swap(heights[index], heights[i]);
        }

        return names;
    }
};

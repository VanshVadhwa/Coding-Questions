class Solution {
    private:
    int maxDistance(vector<vector<int>>& arrays, int maximum, int minimum)
    {
        //if maximum and minimum are not from same index
        int indexMin = 0, indexMax = 0;
        for(int i=0;i<arrays.size();i++)
        {
            if(arrays[i].front()==minimum) 
            {
                indexMin = i;
                break;
            }
        }
        for(int i=0;i<arrays.size();i++)
        {
            if(arrays[i].back()==maximum) 
            {
                indexMax = i;
                break;
            }
        }
        if(indexMin != indexMax) {
            return abs(maximum-minimum);
        } 

        //if maximum and minimum are at same index, find second max and second minimum
        int newMaximum = INT_MIN, newMinimum = INT_MAX;
        for(int i=0;i<arrays.size();i++)
        {
            if(i != indexMax) 
            {
                newMaximum = max(arrays[i].back(), newMaximum);
            }
            if(i != indexMin)
            {
                newMinimum = min(arrays[i].front(), newMinimum);
            }
        }

        //now, we need to check if maximum - newMinimum is greater, or newMaximum - minimum is greater and whatever it is, we need to return it to get our final anmswer
        int answer = max(abs(maximum-newMinimum), abs(newMaximum-minimum));
        return answer;
    }

public:
    int maxDistance(vector<vector<int>>& arrays) {
        int row = arrays.size();

        int maximum = INT_MIN;
        int minimum = INT_MAX;

        for(int i=0;i<row;i++)
        {
            maximum = max(arrays[i].back(), maximum);
            minimum = min(arrays[i].front(), minimum);
        }

        return maxDistance(arrays, maximum, minimum);
    }
};

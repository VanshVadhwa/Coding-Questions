class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<bool> minutesArray(1440, false);
        
        for (string time : timePoints) {
            int hours = ((time[0] - '0') * 10) + (time[1] - '0');
            int minutes = ((time[3] - '0') * 10) + (time[4] - '0');
            int totalMinutes = hours * 60 + minutes;
            
            if (minutesArray[totalMinutes]) return 0;  
            minutesArray[totalMinutes] = true;
        }
        
        int firstTime = -1, lastTime = -1, minDifference = 1440;
        
        for (int i = 0; i < 1440; i++) {
            if (minutesArray[i]) {
                if (firstTime == -1) firstTime = i;
                if (prevTime != -1) {
                    minDifference = min(minDifference, i - prevTime);
                }
                prevTime = i;
            }
        }
        
        minDifference = min(minDifference, 1440 - (prevTime - firstTime));
        
        return minDifference;
    }
};

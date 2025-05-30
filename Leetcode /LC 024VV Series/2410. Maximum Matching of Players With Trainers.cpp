class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int count = 0;
        for(int i=0;i<trainers.size() && count<players.size();i++) {
            if(players[count] <= trainers[i]) {
                count++;
            }
        }

        return count;
    }
};

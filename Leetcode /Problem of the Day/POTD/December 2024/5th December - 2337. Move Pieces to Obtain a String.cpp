class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.length();
        int first = 0;
        int second = 0;

        while(first < n || second < n) {
            while(first < n && start[first] == '_') first++;
            while(second < n && target[second]=='_') second++;

            char c = start[first];

            if(c != target[second]) return false;
            if(c=='L' && first < second) return false;
            if(c=='R' && first > second) return false;

            first++;
            second++;
        }

        return true;
    }
};

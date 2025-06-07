class Solution {
public:
    string clearStars(string s) {
        int n = s.length();
        priority_queue<char,vector<char>,greater<char>> pq;
        unordered_map<char,vector<int>> map;
        vector<int> marked(n,false);

        for(int i=0;i<n;i++) {
            if(s[i]=='*') {
                char top = pq.top();
                pq.pop();
                int index = map[top].back();
                map[top].pop_back();
                marked[index] = true;
                marked[i] = true;
            }
            else {
                pq.push(s[i]);
                map[s[i]].push_back(i);
            }
        }

        string ans = "";
        for(int i=0;i<n;i++) {
            if(!marked[i]) ans += s[i];
        }

        return ans;
    }
};

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> map;

        for(char c : sentence) map[c]++;

        return map.size()==26;
    }
};

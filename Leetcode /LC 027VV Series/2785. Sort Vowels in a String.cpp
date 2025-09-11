class Solution {
private:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||c=='I' || c=='O' || c=='U';
    }   
public:
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<char>> pq;
        for(char c : s) if(isVowel(c)) pq.push(c);
        for(char& c : s) if(isVowel(c)) {
            c = pq.top();pq.pop();
        }
        return s;
    }
};

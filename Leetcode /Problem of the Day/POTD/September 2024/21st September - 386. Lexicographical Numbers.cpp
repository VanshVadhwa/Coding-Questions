class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> strings(n,"");
        for(int i=0;i<n;i++) {
            strings[i] = to_string(i+1);
        }
        sort(strings.begin(),strings.end());

        vector<int> numbers(n,0);
        for(int i=0;i<n;i++) {
            numbers[i] = stoi(strings[i]);
        }

        return numbers;
    }
};

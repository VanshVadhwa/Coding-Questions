class Solution {
private:
    void sub(string s, int index, string& temp, unordered_map<string,bool>& map) {
        if(index == s.size()) {
            per(temp,0,map);
            return;
        }

        // not include
        sub(s,index+1,temp,map);
        //include
        temp.push_back(s[index]);
        sub(s,index+1,temp,map);
        temp.pop_back();
    }

    void per(string& s, int index, unordered_map<string,bool>& map) {
        if(index==s.size()) {
            map[s] = true;
            return;
        }

        for(int i=index;i<s.size();i++) {
            swap(s[i],s[index]);
            per(s,index+1,map);
            swap(s[i],s[index]);
        }
    }
public:
    int numTilePossibilities(string tiles) {
        string temp;
        unordered_map<string,bool> map;
        sub(tiles,0,temp,map);
        return map.size()-1;
    }
};

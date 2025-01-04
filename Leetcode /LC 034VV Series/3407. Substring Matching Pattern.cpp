class Solution {
public:
    bool hasMatch(string s, string p) {
        int n1 = s.length();
        int n2 = p.length();
        
        int pos = p.find('*');
        
        string p1 = p.substr(0,pos);
        string p2 = p.substr(pos+1);

        int start = s.find(p1);
        if(start == string::npos) return false;

        int end = s.rfind(p2);
        if(end == string::npos) return false;

        return start + p1.length() <= end;
        
    }
};

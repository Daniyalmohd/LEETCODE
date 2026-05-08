class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
       unordered_map<string,string>;

       string temp = s;
       sort(s.begin(),s.end());
       string temp2 = t;
       sort(t.begin(),t.end());

       return s==t;
    }
};
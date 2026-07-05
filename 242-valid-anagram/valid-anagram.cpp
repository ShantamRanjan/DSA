class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;
        if(s.length()!=t.length()) return false;
        for(int i = 0 ; i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i = 0 ; i<t.length();i++){
            mp2[t[i]]++;
        }
        for(auto it:mp1){
            char ch1 = it.first;
            int freq1 = it.second;
            if(mp2.find(ch1)!=mp2.end()){
                int freq2 = mp2[ch1];
                if(freq1 != freq2) return false;
            }
            else return false;
        }
        return true;


        
    }
};
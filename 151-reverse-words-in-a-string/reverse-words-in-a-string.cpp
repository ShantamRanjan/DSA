class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end());//first reverse of the entire string
        for(int i = 0;i<n;i++){
            string word = "";
            while(i<n && s[i]!=' '){// identifying the word
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end()); // reversing the identified word
            if(word.length()>0){// add the final answer
                ans += " "+word;
            }
        }
        return ans.substr(1);
        
    }
};
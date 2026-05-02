class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int count = 0;
        set<char> st(allowed.begin(), allowed.end());
        for(int i=0;i<n;i++){
            bool ok = true;
            for(char c:words[i]){
                if(st.find(c) == st.end()){
                    ok = false;
                    break;
                }

            }
            if(ok) count++;
            

        }
        return count;
    }
};
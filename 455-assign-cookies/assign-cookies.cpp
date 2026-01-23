class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int gindex = 0;
        int sindex = 0;
        while(gindex<g.size()&&sindex<s.size()){
            if(s[sindex]>=g[gindex]) gindex++;
            sindex++;
        }
        return gindex;
        
    }
};
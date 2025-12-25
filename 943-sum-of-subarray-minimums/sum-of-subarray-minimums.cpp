class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> psee(n);
        stack<int> st;
        for(int i = 0;i<=n-1;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            psee[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        vector<int> nsee(n);
        while(!st.empty()) st.pop();
         for(int i = n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            nsee[i] = st.empty()? n:st.top();
            st.push(i);
        }
        long long ans =0 ;
        long long mod = 1e9 + 7;
        for(int i = 0; i < n; i++){
            long long left = i - psee[i];
            long long right = nsee[i] - i;
            ans = (ans + 1LL * arr[i] * left * right) % mod;
        
            if(ans<0) ans+= mod;
        }
        return (int)(ans % mod);
    }

};
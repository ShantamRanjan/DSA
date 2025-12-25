class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        list<int> st;   // FIX 1
        int n = asteroids.size();

        for(int i = 0; i < n; i++){   // FIX 2

            if(asteroids[i] > 0){     // FIX 3
                st.push_back(asteroids[i]);
            }
            else{
                while(!st.empty() && st.back() > 0 &&
                      st.back() < abs(asteroids[i])){
                    st.pop_back();   // FIX 4
                }

                if(!st.empty() && st.back() == abs(asteroids[i])){
                    st.pop_back();
                }
                else if(st.empty() || st.back() < 0){
                    st.push_back(asteroids[i]);
                }
            }
        }

        // FIX 5: convert list to vector
        return vector<int>(st.begin(), st.end());
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        int longest = 1;

        if(n == 0) return 0;

        unordered_set<int> st;

        for(auto i : nums){
            st.insert(i);
        }

        for(auto i : st){

            if(st.find(i-1) == st.end()){

                int cnt =1;

                int x = i;
            
                while(st.find(x+1) != st.end()){

                    x++;

                    cnt++;
                }

                longest = max(cnt, longest);
            }
        }    

        return longest;    
    }
};

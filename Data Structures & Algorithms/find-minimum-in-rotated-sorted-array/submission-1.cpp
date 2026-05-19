class Solution {
public:
   constexpr int findMin(vector<int> &nums) {

        int l = 0 , r = nums.size() - 1, ans = INT_MAX;

        while(l <= r)
        {
            ans = std::min(ans, std::min(nums[l], nums[r]));
            l++; r--;
        }        

        return ans;
    }
};

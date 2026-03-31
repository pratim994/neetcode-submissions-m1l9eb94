#pragma GCC optimize("O3")


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size(),  prefix = 1, suffix = 1;

        vector<int> res(n);

        for(int i = n-1; i >= 0; i--){

            res[i] = prefix;

            prefix *= nums[i];

        }

        for(int j = 0; j < n ; j++)
        {
            res[j] = (res[j]*suffix);

            suffix = (nums[j]*suffix);
        }

        return res;


    }
};

auto init =[](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

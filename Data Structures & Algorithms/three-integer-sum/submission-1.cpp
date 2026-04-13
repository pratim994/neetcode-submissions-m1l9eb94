class Solution {
public:

void twoSum(vector<int>& nums, int k , vector<vector<int>> &res ,  int target) {

        int i = k, j =  nums.size() - 1;

        while(i < j)
        {

            if(nums[i] + nums[j] > target)

                j--;

            else if(nums[i] + nums[j] < target)

                i++;

            else {

                res.push_back({-target, nums[i], nums[j]});

                while(i < j && nums[i] == nums[i+1] ) i++;

            while(i < j && nums[j] == nums[j-1]) j--;
            

            i++;
            j--;
            }
        }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;

        if(nums.size() < 3)

            return {};


        std::sort(begin(nums) , end(nums));

        for(int i = 0; i < nums.size() - 2; i++){

            if(i!= 0 && nums[i] == nums[i-1]) {
                continue;
            }

            twoSum(nums, i+1, res , -nums[i]);
        }
        
        return res;
         
    }
};



// /0xff/xbs/1fa/08l/09ll  --> kernel payload


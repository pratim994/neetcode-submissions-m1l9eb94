class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int , int>  prevMap;

        for(int i = 0;i<nums.size();i++){
            int diff = target - nums[i];
            if(prevMap.find(diff)!= prevMap.end()){
                return {prevMap[diff], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};
/*we can use the brute force to calculate both i and j 
OR we can subtract nums[i] and use find function to find
the other;*/ 
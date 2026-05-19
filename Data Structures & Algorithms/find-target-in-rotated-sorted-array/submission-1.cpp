class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0, r = nums.size()-1, idx = 0;


        while(l <= r)
        {
            if(nums[l] == target) { idx = l;  return idx; break;}

           else  if(nums[r] == target)  {idx = r; return idx ;break;}

            else{
                l++; r--;
            }
            
        }
        return -1;
    }
};

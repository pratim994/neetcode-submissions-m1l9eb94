class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int low = 0 , high = n- 1 ;

        while(low <= high){

            int pivot = low + (high - low)/2 ;

            if(nums[pivot] ==  target){
                return pivot;
            }

            if(nums[pivot] > target)

                high = pivot - 1;

            if(nums[pivot] < target)

                low = pivot +1;
        }

        return -1;
        
    }
};

// since they have told me it is in sorted order 
// I can choose a mid value and if mid value is greater than target then we shift left else right

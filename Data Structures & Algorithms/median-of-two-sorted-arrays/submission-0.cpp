class Solution {
public:


    void merge(vector<int>& nums1, vector<int>& nums2){

        for(auto &it : nums1){

            nums2.push_back(it);
        }

        sort(nums2.begin(), nums2.end());
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        merge(nums1, nums2);

        if(nums2.size() %2 != 0){

            return static_cast<double>(nums2[nums2.size()/2]);
        }

        else {

            double mid1 = nums2[nums2.size()/2 -1];

            double mid2 = nums2[nums2.size()/2];

            return static_cast<double>((mid1+mid2)/2);
        }

    }
};


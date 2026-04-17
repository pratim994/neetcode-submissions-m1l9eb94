class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m = mat.size() , n = mat[0].size();

        int i = 0, j = n-1;

        while(i < m && j >= 0)
        {
            if(mat[i][j] < target){
                i++;
            }

            else if(mat[i][j] > target){ j--;}

            else {
                return true;
            }
        }




        return false;
    }
};


// I think I can 
// compare the first and last elements of a row 
// and check  if both are smaller or both are greater 
// if both are greater then we decrement else if both are smaller then we increment
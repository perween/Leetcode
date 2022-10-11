class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int start = 0;
        int end = rows*cols-1;
        while(start <= end )
        {
            int mid = (start + end)/2;
            int midval = matrix[mid/cols][mid%cols];
            if(target == midval)
              return true;
            if(target > midval)
              start = mid + 1;
            else
              end = mid -1;
        }
        return false;
    }
};

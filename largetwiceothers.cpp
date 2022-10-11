class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxindex = 0;
        // find index of max in array
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] > nums[maxindex])
                maxindex = i;
        }
        //find the index
        for(int i =0; i< nums.size(); i++)
        {
            if(maxindex != i && nums[maxindex] < nums[i] * 2)
                return -1;
        }
         return maxindex;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0, j=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                /* if value is not zero then swap with zero. */
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
        
    }
};

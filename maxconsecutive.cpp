class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int tempcount = 0;
        int max = 0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] == 0)
                tempcount = 0;
            else
            {
                tempcount++;
                max = (max>tempcount) ? max: tempcount;
            }
              
        }
        return max;
        
    }
};

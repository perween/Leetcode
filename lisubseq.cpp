class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int result = 1;
        int n = nums.size();
        vector<int> res(n,1);
        if(n == 0)
            return 0;
        
        for(int i = 0; i< n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                if(nums[i] > nums[j])
                    res[i] = max(res[i], res[j] + 1 );
                
            }
            result = max(res[i], result);
        }
        
        return result;
    }
};

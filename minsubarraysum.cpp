class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int sum=0;
        int count = INT_MAX;
        int left = 0;
        int n = nums.size();
        for(i=0; i<n; i++)
        {
            sum += nums[i];
            while(sum >= target)
            {
                count = min(count, i+1-left);
                sum -= nums[left++];
            }
        }
        return (count != INT_MAX) ? count : 0;
    }
       
};

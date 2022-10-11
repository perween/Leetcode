class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b;
        int right = nums.size() -1;
        int left = 0;
        int sum = 0;
       while(left < right )
       {
           sum = nums[left] + nums[right];
           if(sum == target )
               return {left + 1, right + 1};
           if(sum > target)
               right--;
           else
               left++;
       }
        return {-1,-1};
    }
};

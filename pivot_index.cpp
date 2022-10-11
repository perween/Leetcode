class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = 0;
        int n = nums.size();
        int sum = 0;
        int leftsum = 0;
        int diff;
        for(int i=0; i<n; i++)
        {
            sum  = sum + nums[i];
        }
        for(int i=0; i<n; i++)
        {
            diff = sum - leftsum - nums[i];
            if(leftsum == diff)
              return i;
            leftsum = leftsum + nums[i];
            

        }      
        return -1;    
        
    }
};

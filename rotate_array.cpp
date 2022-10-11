Solution 1: 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k );
        reverse(nums.begin() + k, nums.end());
        
        
    }
};

Solution 2:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();
        if( k > n)
            k = k%n;
        int diff = n - k;
        int pos = 0;
        for(int i=diff; i<n; i++)
        {
            temp.push_back(nums[i]);
            //pos++;
        }
        for(int i=0; i<diff; i++)
            temp.push_back(nums[i]);
        for(int i=0; i<n; i++)
            nums[i] = temp[i];
        
    }
};

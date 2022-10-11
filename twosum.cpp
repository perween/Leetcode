Solution 1:
===========
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> map;
       for(int i = 0; i< nums.size(); i++)
       {
           int diff = target - nums[i];
           if(map.find(diff) != map.end())
               return {map[diff], i};
           map[nums[i]] = i;
       }
        return {};
    }
};

solution 2:
===========
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        int a, b;
        for(int i=0; i< nums.size(); i++)
        {
            for(int j=i+1; j< nums.size(); j++)
            {
                if( nums[i] + nums[j] == target)
                {
                    a = i;
                    b = j;
                }
            }
              
        }
        return {a,b};
    }
};

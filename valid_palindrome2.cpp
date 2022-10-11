class Solution {
public:
    bool validPalindrome(string s) {
        int low = 0;
        int high = s.size() -1;
        while(low < high )
        {
            if(s[low] != s[high])
            {
                return (checkpalin(s, low+1, high) || checkpalin(s, low, high-1));
            }
            low++;
            high--;
        }
        return true;
        
    }
    bool checkpalin(string s, int low, int high)
    {
        while(low<high)
        {
            if(s[low] != s[high])
              return false;
            low++;
            high--;
        }
        return true;
    }

};

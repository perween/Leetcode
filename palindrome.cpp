class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long int result =0;
        int orig = x;
        if(x < 0)
            return false;
        while(x != 0)
        {
            rem = x % 10;
            result = (result * 10)  + rem;
            x = x/10;
        }
        if( result == orig)
            return true;
        else
            return false;
            
    }
};

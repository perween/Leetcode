class Solution {
public:
    int myAtoi(string s) {
        int result = 0;
        int sign = 1;
        int i = 0;
         /* check for space */
        while(i<s.length() && s[i] == ' ')i++;
       
        /* check for sign */
        if(s[i] == '-' || s[i] == '+')
        {
            sign = s[i] == '-'?-1:1;
            i++;
        }
        /* check for digit */
        while( i<s.length() && (s[i] >= '0' && s[i] <= '9' ))
        {
            int digit = (s[i] - '0') * sign;
            /* check for overflow */
            if (sign == 1 && (result > INT_MAX/10 || (result == INT_MAX/10 && digit > INT_MAX%10)))
                return INT_MAX;
            if( sign == -1 && (result < INT_MIN/10 || (result == INT_MIN/10 && digit < INT_MIN%10)))
                return INT_MIN;
            result = result*10 + digit;
            
            i++;
            
        }
        return result;
        
    }
};

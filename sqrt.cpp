class Solution {
public:
    int mySqrt(int x) {
        long result;
        int mid, left =1, right = x/2;
        int ans;
        if( x <= 1)
            return x;
        while(left <= right)
        {
            mid = (right + left) / 2;
            long temp = (long)mid * (long)mid;
            if(temp == x )
                return mid;
            else if(temp > x )
                    right = mid - 1;
            else
                ans = mid,left = mid + 1;
            
        }
        return ans;
    }
};

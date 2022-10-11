public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 0;
        int carry = 0;
        int n = digits.size();
        int i = n-1;
        for(; i>=0; i--)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
            
        }
      vector<int> result(n+1, 0) ;
      result[0] = 1;
   
       return result; 
    }
};

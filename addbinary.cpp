class Solution {
public:
    string addpadding(string s, int n)
     {
         string padding;
         for (int i=0; i< n ; i++)
             padding.push_back('0');
        return padding + s;
     }
        
    string addBinary(string a, string b) {
        string temp;
        char carry;
        int diff, maxlen;
        int len1 = a.length();
        int len2 = b.length();
        if (len1 > len2)
        {
            maxlen = len1;
            diff = len1 - len2;
            b = addpadding(b, diff);
        }
        else
        {
            maxlen = len2;
            diff = len2 - len1;
            a = addpadding(a, diff);
        }
            
        for(int i=maxlen -1; i>=0; i--)
        {
            if(a[i] == '1' && b[i] == '1')
            {
                if (carry == '1')
                {
                    temp.push_back('1');
                    carry = '1';
                }
                else
                {
                    temp.push_back('0');
                    carry = '1';
                }
            }
            else if (a[i] == '0' && b[i] == '0')
            {
                if( carry == '1')
                {
                    temp.push_back('1');
                    carry = '0';
                    
                }
                else
                {
                    temp.push_back('0');
                    carry = '0';
                }
            }
            else if(a[i] != b[i])
            {
                if(carry == '1')
                {
                    temp.push_back('0');
                    carry = '1';
                    
                }
                else
                {
                    temp.push_back('1');
                    carry = '0';
                }
            }
        }
        if(carry == '1')
        {
            temp.push_back('1');
        }
         reverse(temp.begin(), temp.end());
         cout << temp;
        return temp;
        
    }
};

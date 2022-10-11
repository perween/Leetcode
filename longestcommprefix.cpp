class Solution {
public:
    
    string prefix(string res, string str)
    {
        int len = min(res.length(), str.length());
        string result= "";
        for(int i=0; i< len; ++i)
        {
            if(res[i] != str[i])
                break;
            result = result + str[i]; 
        }
        return result;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        int i;
        for( i= 1; i<strs.size(); ++i)
            res = prefix(res, strs[i]);
        return res;
        }
        
};

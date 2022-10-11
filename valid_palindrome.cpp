class Solution {
public:
    bool isPalindrome(string s) {
        string temp, result;
        for(auto ch: s)
        {
            if(isalnum(ch))
                temp += tolower(ch);
        }
        result.resize(temp.size());
        reverse_copy(temp.begin(), temp.end(), result.begin());
        return (temp == result);
        
        
        
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        string temp;
        int len = haystack.length();
        int j,i;
        int needlen = needle.length();
        if(!needlen)
            return -1;
        for( i=0; i< len; i++)
        {
            if(haystack[i] == needle[0])
            {
                
              for( j=0; j<needlen; j++)
               {
                  if(haystack[i + j] != needle[j])
                      break;
                }
            if (j == needlen)
                return i;
            }
    }
        return -1;
    }
};

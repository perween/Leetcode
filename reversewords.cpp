class Solution {
public:
    string reverseWords(string s) {
    int lastspaceindex = -1;
    int n = s.length();
    for( int i=0; i<= n; i++)
    {
        if(i == n || s[i] == ' ')
        {
            int startindex = lastspaceindex + 1;
            int endindex = i - 1;
            while(startindex < endindex)
            {
                char temp = s[startindex];
                s[startindex] = s[endindex];
                s[endindex] = temp;
                startindex++;
                endindex--;
            }
            lastspaceindex = i;
        }
    }
    return s;
 }
    
};

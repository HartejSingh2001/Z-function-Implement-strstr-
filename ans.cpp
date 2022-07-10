class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=haystack.find(needle);
        if(index!=string::npos)
        {
            return index;
        }
        return -1;   
    }
};
// if substring is not found then string::npos is returned.

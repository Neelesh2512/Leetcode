class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size(), m = needle.size();
        
        if(n == 0 && m == 0 ) return 0;
        
        return haystack.find(needle);
         
        
    }
};
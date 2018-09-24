class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> char_ind(256,-1);
        int len = s.length();
        int max_len = 0;
        int start = -1;
        
        int i;
        for(i = 0;i < len;i++)
        {
            if(char_ind[s[i]] > start)
                start = char_ind[s[i]];
            
            max_len = max(max_len,i-start);
            char_ind[s[i]] = i;
        }
        
        return max_len;
    }
};
class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        last = {}
        maxLength = 0
        location = 0
        for i, v in enumerate(s):
            # print(last)
            # print(location, maxLength)
            if v not in last or last[v] < location:
                maxLength = max(maxLength, i - location + 1)
            else:
                location = last[v] + 1
            last[v] = i
        return maxLength
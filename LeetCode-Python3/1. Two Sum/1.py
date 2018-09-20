# -*- coding: utf-8 -*-
"""
Created on Thu Sep 20 13:06:43 2018

@author: Administrator
"""

class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        seen = {}
        for i, num in enumerate(nums):
            want = target - num
            if want in seen:
                return [seen[want], i]
            seen[num] = i
        return []
                

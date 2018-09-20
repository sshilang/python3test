# -*- coding: utf-8 -*-
"""
Created on Thu Sep 20 13:25:20 2018

@author: Administrator
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head = ListNode(-1)
        res = head
        carry = 0
        while l1 != None or l2 != None:
            s = l1.val + l2.val + carry
            carry, val= divmod(s, 10)
            head.next = ListNode(val)
            head = head.next
            l1 = l1.next
            l2 = l2.next
            if l1 is None and l2 is None:
                break
            if l1 is None:
                l1 = ListNode(0)
            if l2 is None:
                l2 = ListNode(0)
            
        if carry == 1:
            head.next = ListNode(1)
        return res.next
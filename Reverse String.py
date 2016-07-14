#!/usr/bin/python

import string
class Solution(object):
	def reverseString(self, s):
		"""
		:type s: str
		:rtype: str
		"""
		if s and len(s) > 0:
			a = []
			for i in range(len(s)):
				# rs += s[-1-i] is very expensive, dont do this.
				a.append(s[-1 - i])
			return string.join(a, '')
		else:
			return s
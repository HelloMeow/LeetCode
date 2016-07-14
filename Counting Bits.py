#!/usr/bin/python

class Solution(object):
def countBits(self, num):
	"""
	:type num: int
	:rtype: List[int]
	"""
	ret = [0]
	while num > len(ret) - 1:
		ret += [a + 1 for a in ret]
	return ret[0 : num + 1]
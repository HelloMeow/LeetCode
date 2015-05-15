class Solution:
    # @param {integer} n
    # @return {string[]}
    def generateParenthesis(self, n):
    	v = []
    	self.foo(n-1, n, 1, "(", v)
    	return v

    def foo(self, ca, cb, c, s, v):
    	if ca > 0:
    		self.foo(ca-1, cb, c+1, s+"(", v)
    	if c > 0:
    		self.foo(ca, cb-1, c-1, s+")", v)
    	if ca == 0 and cb == 0:
    		v += [s]

s = Solution()
print s.generateParenthesis(3)
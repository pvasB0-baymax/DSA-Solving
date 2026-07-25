class Solution:
    def maxProduct(self, n: int) -> int:
        l=[int(x) for x in str(n)]
        l=sorted(l)
        print(l)
        return l[len(l)-1]*l[len(l)-2]
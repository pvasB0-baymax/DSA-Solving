class Solution:
    def maxDigitRange(self, nums: list[int]) -> int:
        l=[]
        for i in nums:
            s=str(i)
            r=[int(x) for x in s]
            m=max(r)
            n=min(r)
            l.append(m-n)
        mr=max(l)
        sum=0
        for i in range(len(l)):
            if l[i]==mr:
                sum+=nums[i]
        return sum
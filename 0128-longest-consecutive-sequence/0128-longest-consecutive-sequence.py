class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=set(nums)
        res=0
        for i in s:
            if i-1 not in s:
                ct=1
                while i+1 in s:
                    ct+=1
                    i+=1
                res=max([res,ct]) 
        return res
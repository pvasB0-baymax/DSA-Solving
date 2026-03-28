class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        s1=set(nums)
        if len(s1)==len(nums):
            return False;
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                #print(abs(i-j))
                if nums[i]==nums[j] and abs(i-j)<=k:
                    
                    return True;
        else:
            return False;
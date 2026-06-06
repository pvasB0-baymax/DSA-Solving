class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
          l=[]
          lsum,rsum=0,0
          for i in range(len(nums)):
            lsum=sum(nums[0:i])
            rsum=sum(nums[i+1:])
            l.append(abs(lsum-rsum))
          return l
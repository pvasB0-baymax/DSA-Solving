class Solution:
    def findTheArrayConcVal(self, nums: List[int]) -> int:
        i=0
        j=len(nums)-1
        sum=0
        while i<=j:
            if i==j:
                sum+=nums[i]
                break
            else:
                s=str(nums[i])
                s+=str(nums[j])
                sum+=int(s)
                i+=1
                j-=1
        return sum
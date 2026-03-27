class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        res=[]
        for i in range(len(nums)):
            if nums[i]==key:
                if i not in res:
                    res.append(i)
                if i-k<0:
                    for j in range(0,i):
                        #if j not in res:
                            res.append(j)
                else:
                    for j in range(i-k,i):
                        #if j not in res:
                            res.append(j)
                if i+k>=len(nums):
                    for j in range(i+1,len(nums)):
                        #if j not in res:
                            res.append(j)
                else:
                    for j in range(i+1,i+k+1):
                        #if j not in res:
                            res.append(j)
        res=sorted(list(set(res)))
        return res
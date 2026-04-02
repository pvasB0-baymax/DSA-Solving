class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        l=[int(x) for x in boxes]
        res=[]
        for i in range(len(l)):
            res.append(0)
            for j in range(len(l)):
                if l[j]==1:
                    res[i]+=abs(i-j)
        return res     
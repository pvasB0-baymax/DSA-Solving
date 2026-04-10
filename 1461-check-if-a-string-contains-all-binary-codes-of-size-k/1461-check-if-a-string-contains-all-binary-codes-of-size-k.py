class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        res=[]
        for i in range(len(s)-k+1):
            res.append(s[i:i+k])
        resset=set(res)
        if(len(resset)==2**k):
            return True
        return False
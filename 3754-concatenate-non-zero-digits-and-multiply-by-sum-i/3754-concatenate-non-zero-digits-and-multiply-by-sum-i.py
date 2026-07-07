class Solution:
    def sumAndMultiply(self, n: int) -> int:
        sum=0
        s=""
        x=0
        r=str(n)
        for i in r:
            if i!='0':
                s+=str(i)
            sum+=int(i)
        if s=="":
            s="0"
        x=int(s)
        return x*sum
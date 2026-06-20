class Solution:
    def getLeastFrequentDigit(self, n: int) -> int:
        l=[0,0,0,0,0,0,0,0,0,0]
        s=str(n)
        for i in s:
            l[int(i)]+=1
        m=100000000000
        for i in range(len(l)):
            if l[i]!=0 and l[i]<m:
                m=l[i]
        for i in range(len(l)):
            if l[i]!=0 and l[i]==m:
                return i

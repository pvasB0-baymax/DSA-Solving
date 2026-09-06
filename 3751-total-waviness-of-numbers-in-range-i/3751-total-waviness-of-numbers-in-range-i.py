class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        ct=0
        for i in range(num1,num2+1):
            s=str(i)
            for j in range(1,len(s)-1):
                if int(s[j])>int(s[j-1]) and int(s[j])>int(s[j+1]):
                    ct+=1
                elif int(s[j])<int(s[j-1]) and int(s[j])<int(s[j+1]):
                    ct+=1
        return ct
            
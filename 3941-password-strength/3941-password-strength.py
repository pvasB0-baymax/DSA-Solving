class Solution:
    def passwordStrength(self, password: str) -> int:
        l=[x for x in password]
        z=list(set(l))
        res=0
        for i in z:
            if i in "!@#$":
                res+=5
            elif i in "0123456789":
                res+=3
            elif i.islower():
                res+=1
            else:
                res+=2
        return res
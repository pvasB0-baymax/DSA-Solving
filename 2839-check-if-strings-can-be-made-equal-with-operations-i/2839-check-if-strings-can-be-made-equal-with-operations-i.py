class Solution:
    def canBeEqual(self, s1: str, s2: str) -> bool:
        set1=set(s1[0::2])
        set2=set(s2[0::2])
        s3=set(s1[1::2])
        s4=set(s2[1::2])
        if set1==set2 and s3==s4:
            return True
        else:
            return False
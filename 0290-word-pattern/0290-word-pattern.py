class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dict1={}
        l=[x for x in s.split()]
        print(l)
        if len(pattern)!=len(l):
            return False
        for i in range(0,len(pattern)):
            if pattern[i] not in dict1.keys():
                if l[i] not in dict1.values():
                    dict1[pattern[i]]=l[i]
                else:
                    return False
                print(dict1)
            else:
                if l[i]!=dict1[pattern[i]]:
                    return False
        return True
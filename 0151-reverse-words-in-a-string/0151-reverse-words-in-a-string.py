class Solution:
    def reverseWords(self, s: str) -> str:
        l=[x for x in s.split()]
        r=""
        for i in l[::-1]:
            r+=i
            r+=" "
        return r[:len(r)-1]
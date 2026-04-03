class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        ct=0
        for i in stones:
            if i in jewels:
                ct+=1
        return ct
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(len(board)):
            for j in range(9):
                if board[i][j]!=".":
                    if board[i][j] in board[i][j+1:]:
                        return False
        for i in range(len(board)):
            l=[]
            for j in range(9):
                if board[j][i]!=".":
                    if board[j][i] in l:
                        return False
                    else:
                        l.append(board[j][i])
        for i in range(0,len(board),3):
            for j in range(0,9,3):
                l=[]
                for k in range(j,j+3):

                    if board[i][k]!=".":
                        if board[i][k] in l:
                            return False
                        else:
                            l.append(board[i][k])
                    if board[i+1][k]!=".":
                        if board[i+1][k] in l:
                            return False
                        else:
                            l.append(board[i+1][k])
                    if board[i+2][k]!=".":
                        if board[i+2][k] in l:
                            return False
                        else:
                            l.append(board[i+2][k])
        return True 
class Solution {
    public void solveSudoku(char[][] board) {
        solveSudoku(board, 0, 0);
    }

  public boolean solveSudoku(char[][] board, int i, int j) {
    if (j == 9) {
      i++;
      j = 0;
      if (i == 9) return true;
    }

    if (board[i][j] != '.')
      return solveSudoku(board, i, j + 1);
    
    for (char move = '1'; move <= '9'; move++) {
      if (isValidMove(move, board, i, j)) {
        board[i][j] = move;
        if (solveSudoku(board, i, j + 1)) return true;
        board[i][j] = '.';
      }
    }
    return false;
  }

  boolean isValidMove(char move, char[][] board, int i, int j) {
    for (int col = 0; col < 9; col++)
      if (board[i][col] == move) return false;

    for (int row = 0; row < 9; row++) 
      if (board[row][j] == move) return false;

    int row = (i / 3) * 3;
    int col = (j / 3) * 3;

    for (int m = row; m < row + 3; m++) 
      for (int n = col; n < col + 3; n++) 
        if (board[m][n] == move) return false;
    
    return true;
  }
}

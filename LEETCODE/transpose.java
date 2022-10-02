//https://leetcode.com/problems/transpose-matrix/
//Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [[1,4,7],[2,5,8],[3,6,9]]

class Solution {
    public static int [][]  transpose(int[][] matrix) {
          //transpose matrix
        int row=matrix.length;
        int column=matrix[0].length;
        int[][] transmatrix=new int[matrix[0].length][matrix.length];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                transmatrix[j][i]=matrix[i][j];
            }
        }
        return transmatrix;
    }
        
        
       
}  


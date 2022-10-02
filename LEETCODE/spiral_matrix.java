//https://leetcode.com/problems/spiral-matrix/
//return all elements of the matrix in spiral order
//Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [1,2,3,6,9,8,7,4,5]

class Solution {
    public static List<Integer> spiralOrder(int[][] matrix) {
        int startrow=0;
        int startcol=0;
        int endrow=matrix.length-1;
        int endcol=matrix[0].length-1;
          List<Integer> ls = new ArrayList<>();
       
     while(startrow<=endrow && startcol<=endcol){
         for(int j=startcol;j<=endcol;j++){
             //top
             ls.add(matrix[startrow][j]);
             
         }
            //right
             for(int i=startrow+1;i<=endrow;i++){
             
           ls.add(matrix[i][endcol]);
         }
             for(int j=endcol-1;j>=startcol;j--){
                 if(startrow==endrow){
                     break;
                 }
             //bottom
             ls.add(matrix[endrow][j]);
         }
             for(int i=endrow-1;i>=startrow+1;i--){
           //left
                 if(startcol==endcol){
                     break;
                 }
             ls.add(matrix[i][startcol]);
         }
            startrow++;
            startcol++;
            endrow--;
            endcol--;
        
    }
        return ls;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int matrix[][]=new int[50][50];
        for(int i=0;i<matrix.length;i++){
               for(int j=0;i<matrix.length;j++){
        matrix[i][j]=sc.nextInt();
        }
        }
        System.out.println(spiralOrder(matrix));
    }
    
}

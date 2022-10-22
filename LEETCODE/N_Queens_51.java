class Solution {
    List<List<String>>ans=new ArrayList<>();
    int m;
       
    
    public void fun(char[][]b,int c,int[]x,int[]y,int[]d,int n){
        if(c>=m){
            List<String>a=new ArrayList<>();
            for(int i=0;i<n;i++){
                String s="";
                
                for(int j=0;j<n;j++){
                    s+=String.valueOf(b[i][j]);
                }
                a.add(s);
            }
            ans.add(a);
        }
       for(int col=0;col<n;col++){
         if(x[col+c]==0&&y[n-1+c-col]==0&&d[col]==0){
             b[col][c]='Q';
             x[col+c]=1;
             y[n-1+c-col]=1;
             d[col]=1;
             fun(b,c+1,x,y,d,n);
              b[col][c]='.';
             x[col+c]=0;
             y[n-1+c-col]=0;
             d[col]=0;
         }
       }
    }
    public List<List<String>> solveNQueens(int n) {
        m=n;
     
       char b[][]=new char[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[i][j]='.';
            }
        }
        int x[]=new int[2*n];
        int y[]=new int[2*n];
        int d[]=new int[2*n];
        fun(b,0,x,y,d,n);
        
        return ans;
    }
}

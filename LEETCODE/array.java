public class array{
  public static int search(int array[][] , int key){
    int n=array.length;
    int m=array[0].length;
     int count=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if (array[i][j]==key){
             count++;
        }
    }
  }
return count;
  }

    public static void main(String args[]) {

       int array[][] = { {8,6,8},{8,3,4} };
       int key=5;
       System.out.println(search(array, key));
        
    }
}
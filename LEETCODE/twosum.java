//https://leetcode.com/problems/two-sum/
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

class Solution {
    public static  int[] twoSum(int[] arr, int target) {
        int[] ans=new int[2];
        for(int i=0;i<arr.length;i++){
        for(int j=i+1;j<arr.length;j++){
            if(arr[i]+arr[j]==target){
                ans[0]=i;
                ans[1]=j;
                break;
            }
        }
        }
        return ans;
    }
   public static void main(){
        
        //int arr[]=new int[arr.length];
        Scanner sc= new Scanner(System.in);
       int arr[]=new int[20];
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        int target=sc.nextInt();
        System.out.print(twoSum(arr,target));
    }
}

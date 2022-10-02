//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
    public static int search(int[] arr, int target) {
       return binarySearch(arr, target, 0, arr.length-1);
    }
    
   public static  int binarySearch(int[] arr, int target, int si, int ei) {
       if(si>ei){
            return -1;
        }
       
      while(si<=ei){
          int mid= si+(ei-si)/2;
        if(arr[mid]==target){
            return mid;
            
        }
        if(arr[si]<=arr[mid]){
            //case-a left
            if(arr[si]<=target && target <=arr[mid]){
                return binarySearch(arr, target, si, mid);
            }
            else{
                //case-b right
                return binarySearch(arr, target, mid+1, ei);
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[ei]){
                return binarySearch(arr, target, mid+1, ei);
            }
            else{
                return binarySearch(arr, target, si, mid-1);
            }
        
        }
          
      }
   return -1;
    }
   
}

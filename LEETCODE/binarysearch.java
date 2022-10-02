//https://leetcode.com/problems/binary-search/

class Solution {
    public int search(int[] nums, int key) {
        
        int start=0, end=nums.length-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==key){
                return mid;
            }
            else if(nums[mid]<key){
                start=mid+1;
                
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    
}

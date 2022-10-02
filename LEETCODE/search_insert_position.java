//https://leetcode.com/problems/search-insert-position/
//Given a sorted array of distinct integers and a target value, return the index if the target is found. 
//If not, return the index where it would be if it were inserted in order.


class Solution {
    public int searchInsert(int[] nums, int target) {
        int si=0;
        int ei=nums.length-1;
     while(si<=ei){
         int mid=si+(ei-si)/2;
            if(nums[mid]==target){
                return mid;
            }
         else if(nums[mid]>target){
             ei=mid-1;
         }
         else{
             si=mid+1;
         }
        }
        return si;
    }
    }

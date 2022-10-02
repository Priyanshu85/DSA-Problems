//https://leetcode.com/problems/fibonacci-number/

class Solution {
    public static  int fib(int n) {
        if(n==0 || n==1){
            return n;
            
        }
       
        int sum =fib(n-1)+ fib(n-2);
        
        return sum;
    }
    
}

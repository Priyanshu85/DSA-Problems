//https://leetcode.com/problems/powx-n/
//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
//Input: x = 2.00000, n = 10
//Output: 1024.00000

class Solution {
    public double myPow(double x, int n) {
        
        if(n==0){
            return 1;
            
        }
        double halfpow=myPow(x, n/2);
        double halfpowsq= halfpow*halfpow;
         if (n < 0) {
         return (1 / x) * myPow(1 / x, -(n + 1));
         }
        
        if(n%2!=0){
            halfpowsq= x*halfpowsq;
            
        }
        return halfpowsq;
    }
  
 

//https://leetcode.com/problems/palindrome-number/
//Input: x = 121
//Output: true


import java.util.*;
public class palindrome {
    public static boolean isPalindrome(int x) {
        int n=x, rev=0;
        while(x>0){
            int lastd=x%10;
            rev=(rev*10)+ lastd;
            x=x/10;
            
        }
        if(n==rev){
            return  true;
            
        }
        return false;
    }
     public static void main(String args[]){
         try (Scanner sc = new Scanner(System.in)) {
            int x= sc.nextInt();
             System.out.print(isPalindrome(x));
        }
     }
    
}

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Best Time to Buy and Sell Stock
//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0
//  Input: prices = [7,1,5,3,6,4]
//Output: 5

class Solution {
    public static int maxProfit(int[] prices) {
        int maxprofit=0;
        int buyprice=Integer.MAX_VALUE;
        //CALCULATE MAXIMUM PROFIT
        for(int i=0;i<prices.length;i++){
            if(buyprice<prices[i]){
              int profit=prices[i]- buyprice;
              maxprofit=Integer.max(maxprofit, profit);
            }
            else{
                buyprice=prices[i];
            }
        }
    return maxprofit;

    }
    public static void main(String args[]) {
     int prices[]={7,1,5,3,6,4};
     System.out.println("MAXIMUM PROFIT: ");
        System.out.println(maxProfit(prices));
        
    }
}
    

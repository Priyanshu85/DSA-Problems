 //121. Best Time to Buy and Sell Stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

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
    

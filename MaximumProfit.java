package sampleProg;
import java.util.*;
public class MaximumProfit 
{
	public double getMaxProfit(int[] price) {
         double profit = 0L;
        int maxSoFar = 0;
        for (int i = price.length-1;i>-1;i--) {
            if (price[i]>=maxSoFar) {
                maxSoFar=price[i];
            }
            profit+=maxSoFar-price[i];
        }
        return profit;
    }
    
	 public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        int n = sc.nextInt();
	        MaximumProfit mp=new MaximumProfit();
	        for (int i = 0; i < n; i++) {
	            int noOfDays = sc.nextInt();
	            int[] price = new int[noOfDays];
	            for (int j = 0; j < noOfDays; j++) {
	                price[j] = sc.nextInt();
	            }
	            System.out.println("\n"+mp.getMaxProfit(price));
	        }
	    }

	    
}

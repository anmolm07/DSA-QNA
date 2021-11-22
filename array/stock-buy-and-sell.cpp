/*
The cost of stock on each day is given in an array A[] of size N. 
Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input:
N = 7
A[] = { 100, 180, 260, 310, 40, 535, 695 }

Output:
(0 3) (4 6)

Explanation 1:
We can buy stock on day 0, 
and sell it on 3rd day, 
which will give us maximum profit.

LINK - https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1
*/

void stockBuySell(int price[], int n) {
    bool exchange = false;
    
    for(int i = 0; i < n; i++)
    {
        int buy = i, sell = i;
        
        while(i + 1 < n and price[i] >= price[i + 1])
        {
            i++;
        }
        
        buy = i;
        
        while(i + 1 < n and price[i] <= price[i + 1])
        {
            i++;
        }
        
        sell = i;
        
        if(sell - buy > 0)
        {
            cout << "(" << buy << " " << sell << ") ";
            
            exchange = true;
        }
    }
    
    if(exchange == false)
    {
        cout << "No Profit";
    }
    
    cout << "\n";
}

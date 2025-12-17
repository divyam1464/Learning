#include<iostream>
#include<climits>
using namespace std ; 

void maxProfit(int prices[], int n){
    int bestBuy[n] ;
    bestBuy[0] = INT_MAX ;
    for ( int i=1; i<n; i++ ){
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
    }
    int maxProfit = 0;
    for ( int i=0; i<n; i++ ){
        int currentProfit = prices[i] - bestBuy[i] ;
        maxProfit = max(maxProfit,currentProfit);
    }
    cout << "Maximum Profit is : " << maxProfit << "\n" ;
}

int main()
{
    int prices[6] = {7,6,5,4,3,2};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices,n);
    return 0 ; 
}
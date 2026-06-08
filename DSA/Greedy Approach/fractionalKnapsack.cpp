#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

// Time Complexity will be O(nlogn)

bool compare(pair<double,int> p1, pair<double, int> p2){
    return p1.first > p2.first  ; // descending order based on their ratio values
}

int fractionalKnapsack(vector<int> value , vector<int> weight, int w ){
    int n = value.size() ;
    int ans = 0 ;

    vector<pair<double , int>>  ratio(n, make_pair(0.0, 0)) ; // pair(ration,index)  -> (double, index)
    for(int i= 0 ; i < n ; i++ ){
        double r = value[i] / (double)weight[i] ;
        ratio[i] = make_pair(r,i) ;
    }

    // sort in descending order
    sort(ratio.begin(), ratio.end(), compare) ;

    for(int i = 0 ; i < n ; i++ ){
        int idx = ratio[i].second ;
        if(weight[idx] <= w){
            ans += value[idx] ;
            w -= weight[idx] ;
        } 
        else{
            ans += ratio[i].first * w ;
            w = 0 ;
            break ;
        }
    }
    cout << " Maximum value = " << ans << endl ;
    return ans ;
}

int main()
{
    vector<int> value = {60, 100, 120} ;
    vector<int> weight = {10, 20, 30} ;
    int w = 50 ;
    
    fractionalKnapsack(value,weight,w) ;

    return 0 ; 
}
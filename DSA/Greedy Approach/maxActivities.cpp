#include<iostream>
#include<vector>
using namespace std ; 

int maxActivities(vector<int> start, vector<int> end){
    // 1. sort on basis of end time -> already done 
    // A0 ko select kr rhe hai 
    cout << "Selecting Activity : A0 \n" ;
    int count = 1 ;
    int currEndTime = end[0] ;

    // loop 
    for( int i = 1 ; i < start.size(); i++){
        if (start[i] >= currEndTime) { // non - overlapping condition 
            cout << "Selecting Activity : A" << i << endl ;
            count ++ ; 
            currEndTime = end[i] ;
        } 
    }
    return count ;
}

int main()
{
    vector<int> start = {1,3,0,5,8,5} ;
    vector<int> end = {2,4,6,7,9,9} ;
    cout << maxActivities(start,end) << endl ;
    return 0 ; 
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 

int maxActivities(vector<int> start, vector<int> end){
    // 1. sort on basis of end time -> already done 
    // A0 ko hi select kr rhe hai by default as a good one as array is already sorted based on end time
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

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second  ; // end time ascending order 
    // return p1.second > p2.second  ; // end time descending order 

    // return p1.first < p2.first  ; // start time ascending order 
    // return p1.first > p2.first  ; // start time descending order 
}

int main()
{
    // vector<int> start = {1,3,0,5,8,5} ;
    // vector<int> end = {2,4,6,7,9,9} ;
    // cout << maxActivities(start,end) << endl ;


    // pairs in c++
    vector<int> start = {0, 1, 3} ;
    vector<int> end = {9, 2, 4} ;

    vector<int> v(5,0) ; // initialized the vector of size 5 with all the values as 0 ;
    // similarly doing the same here 
    vector<pair<int, int>>  act(3, make_pair(0,0)) ;


    act[0] = make_pair(0,9);
    act[1] = make_pair(1,2);
    act[2] = make_pair(3,4);

    for(int i=0; i<act.size(); i++){
        cout << "(" << act[i].first << " , " << act[i].second << ")" << endl ;
    }

    sort(act.begin(), act.end(), compare) ;

    cout << "--------------sorted--------------\n" ;

    for(int i=0; i<act.size(); i++){
        cout << "(" << act[i].first << " , " << act[i].second << ")" << endl ;
    }


    return 0 ; 
}
#include<iostream>
using namespace std ; 

int sumof(int mat[][3] , int n , int m ){
    int sum = 0 ;
    for ( int i = 0 ; i < m ; i++ ){
        sum += mat[1][i] ;
    }
    cout << "Sum of the numbers of the second row is : " << sum << endl ;
    return sum ;
}

int main()
{
    int nums[3][3] = { {1,4,9},
                      {11,4,3},
                      {2,2,3} } ;

    sumof(nums,3,3);

    return 0 ; 
}       
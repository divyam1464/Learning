#include<iostream>
using namespace std ; 

void transposed_matrix(int mat[][3], int n , int m ){
    cout << "Entered Matrix is : \n" ;
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++ ){
            cout << mat[i][j] << " " ;
        }
        cout << "\n" ;
    } 

    cout << "Value of n(rows) is : " << n << " and the value of m(columns) is : " << m << endl;
    cout << "Transpose of the above matrix is : \n" ;
    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cout << mat[j][i] << " " ;
        }
        cout << "\n" ;
    }
}

int main()
{
    int arr[2][3]={{4,7,8},
                   {8,8,7} } ;

    transposed_matrix(arr,2,3) ;

    return 0 ; 
}
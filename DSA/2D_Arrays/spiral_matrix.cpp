#include<iostream>
using namespace std ; 

void spiralMatrix(int mat[][4], int n , int m){

    int srow = 0 , scol = 0 ;
    int e_row = n-1 , ecol = m-1 ;

    while( srow <= e_row && scol <= ecol ){
        for ( int j=scol ; j<=ecol; j++ ){
            cout << mat[srow][j] << " "; 
        }

        for ( int i = srow+1 ; i<= e_row ; i++ ){
            cout << mat[i][ecol] << " ";
        }

        for ( int j = ecol-1 ; j>= scol; j-- ){
            if ( srow == e_row ){
                break;
            }
            cout << mat[e_row][j] << " ";
        }

        for ( int i = e_row-1 ; i>= srow+1 ; i-- ){
            if ( scol == ecol ){
                break ;
            }
            cout << mat[i][scol] << " ";
        }

        srow++; scol++;
        e_row--; ecol--;
    }
    cout << "\n" ;
}

int main()
{
    int matrix[4][4] = { {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16} };

    spiralMatrix(matrix,4,4);
    

    int matrix2[3][4] = { {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12} };

    spiralMatrix(matrix2,3,4);

    return 0 ; 
}
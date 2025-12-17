#include<iostream>
using namespace std ; 


// BruteForce Approach
int sortedMatrix( int mat[][4], int n , int m ){
    int key ;
    cout << "Enter the Key you want to search in the Matrix : " ;
    cin >> key ;

    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++ ){
            if ( mat[i][j] == key ){
                cout << "Key found ! " << "\n" ;
                cout << "Location is : " << i+1 << ","<< j+1 << "\n" ; 
                return i , j ;
            }
        }
    }
    return -1 ;
}

// Second Approach -> Binary Search   Row/Column Wise
int sortedMatrix2( int mat[][4], int n , int m ){
    int key ;
    cout << "Enter the Key you want to search in the Matrix : " ;
    cin >> key ;

    for ( int i = 0 ; i < n ; i++ ){
        int low = 0 ;  int high = m-1 ;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if ( mat[i][mid] == key ){
                cout << "Key Found !\nLocation : (" << i+1 << "," << mid+1 << ")\n" ;  
                return i,mid ;
            }
            else if ( mat[i][mid] < key ){
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
    }
    return -1 ;
}

// Third Approach -> Staircase Search 
bool search(int mat[][4], int n , int m, int key ){
    int i = 0 , j = m-1 ;
    while( i < n && j >= 0 ){
        if ( mat[i][j] == key ){
            cout << "Found at : " << i+1 << "," << j+1 << "\n" ;
            return true ; 
        }
        else if ( mat[i][j] > key ){
            j-- ;
        }
        else{
            i++;
        }
    }
    cout << "Not Found ! \n" ;
    cout << *(*(mat+2)+2) << endl ;
    return false ;
}


int main()
{
    int matrix[4][4] = { {1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10,11,12},
                         {13,14,15,16} } ;

    // sortedMatrix(matrix,4,4);
    // sortedMatrix2(matrix,4,4);
    search(matrix,4,4,17);

    return 0 ; 
}
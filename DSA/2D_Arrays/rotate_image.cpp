#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotatedImage(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Personal Approach
    // for ( int i = 0 ; i < n  ; i++ ){
    //     for ( int j = n-1 ; j >= 0 ; j-- ){
    //         cout << matrix[j][i] << " " ;
    //     }
    //     cout << "\n" ;
    // }
    // cout << "\n" ;

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // Print the rotated matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<int>> matrix = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };

    rotatedImage(matrix);

    return 0;
}

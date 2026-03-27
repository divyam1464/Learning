#include<iostream>
using namespace std ; 

int gridWays(int r, int c, int n, int m){
    if(r==n && c==m){
        // Destination Base Case
        return 1 ;
    }
    int v1 = ways(r,c+1,n,m);
    int v2 = ways(r+1, c, n, m);
    return v1 + v2 ;
}

int main()
{
    
    return 0 ; 
}
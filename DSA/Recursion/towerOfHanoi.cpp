#include<iostream>
#include<cmath>
using namespace std ; 

void toh(int n, int a, int b, int c){
    if ( n == 1 ){
        cout << "Transfer Disk " << n << " from " << a << " to " << c << endl; 
        return ;
    }
    toh(n-1,a,c,b);
    cout << "Transfer Disk " << n << " from " << a << " to " << c << endl ;
    toh(n-1,b,a,c);
}

int main()
{
    int n = 3 ;
    cout << "The total moves for " << n << " disks are : " << pow(2,n) - 1 << endl;
    toh(n,1,2,3);
    return 0 ; 
}
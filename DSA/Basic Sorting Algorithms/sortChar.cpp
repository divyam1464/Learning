#include<iostream>
using namespace std ; 

void print(char arr[], int n){
    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << "\n" ;
}

void sortChar(char arr[], int n){
    for ( int i = 1 ; i < n ; i++ ){
        int current = arr[i];
        int previous = i-1 ;
        while ( previous >= 0 && arr[previous] < current ){
            swap(arr[previous], arr[previous+1]);
            previous--;
        }
        arr[previous+1] = current ;
    }
    print(arr,n);
}

int main()
{
    char ch[6] = {'f','b','a','e','c','d'} ;
    sortChar(ch,6);
    return 0 ; 
}
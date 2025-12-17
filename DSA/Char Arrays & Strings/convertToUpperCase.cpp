#include<iostream>
#include<cstring>
using namespace std ; 

void toUpperCase(char arr[], int n){

    for ( int i = 0 ; i < n ; i++ ){
        if ( arr[i] >= 'A' && arr[i] <= 'Z' ){
            continue;
        }
        else{
            arr[i] = (arr[i] - 'a') + 'A' ;
        }
    }
    cout << "To Upper Case is : " <<arr << endl ;
}
int main()
{
    char ch[] = "ApPle" ;
    toUpperCase(ch,strlen(ch)) ;
    return 0 ; 
}
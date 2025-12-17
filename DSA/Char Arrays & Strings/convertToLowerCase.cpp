#include<iostream>
#include<cstring>
using namespace std ; 

void toUpperCase(char arr[], int n){

    for ( int i = 0 ; i < n ; i++ ){
        if ( arr[i] >= 'a' && arr[i] <= 'z' ){
            continue;
        }
        else{
            arr[i] = (arr[i] - 'A') + 'a' ;
        }
    }
    cout << "To Lower Case is : " <<arr << endl ;
}
int main()
{
    char ch[] = "ApPle" ;
    toUpperCase(ch,strlen(ch)) ;
    return 0 ; 
}
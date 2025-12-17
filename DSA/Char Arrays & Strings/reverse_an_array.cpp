#include<iostream>
#include<cstring>
using namespace std ; 

void reverseArray(char ch[], int n){
    int start = 0 ; int end = n - 1 ;
    while(start <= end){
        // swap(ch[start],ch[end]);
        // start++ ;
        // end-- ;

        // Or to reduce the number of lines as we have used post increment/decrement
        swap(ch[start++],ch[end--]);
    }
    cout << "Swapped Word is : " << ch << endl ;
}

int main()
{
    char word[] = "code" ;
    reverseArray(word,strlen(word)) ;
    return 0 ; 
}
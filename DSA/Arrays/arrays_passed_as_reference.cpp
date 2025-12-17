#include<iostream>
using namespace std ; 

void fun(int arr[]){
    arr[2]=12330;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    fun(arr);
    for (int i=0; i<5; i++ ){
        cout << arr[i] << "\n" ;
    }
    
    return 0 ; 
}
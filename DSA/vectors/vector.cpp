#include<iostream>
#include<vector>
using namespace std ; 

int main()
{
    vector<int> vec(5,-1) ;
    cout << vec.size() << " " << vec.capacity() << endl ;
    vec.push_back(20);
    cout << vec.size() << " " << vec.capacity() << endl ;
    return 0 ;
}
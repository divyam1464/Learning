#include <iostream>
using namespace std;
bool checkPowerofTwo(int n){
    return ((n & (n - 1)) ? false : true);
}

int main(){
    int n;
    cout << "Enter the Number to check for power of 2 : "; cin >> n;
    cout << checkPowerofTwo(n);
    return 0;
}
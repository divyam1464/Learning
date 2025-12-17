#include<iostream>
using namespace std;

int dectobin(int n){
    int num = n;
    int pow = 1;
    int binNum = 0;

    while(num > 0){
        int rem = num % 2;
        binNum += rem * pow;
        pow *= 10;
        num /= 2; // <-- Fix here
    }
    return binNum;
}

int main(){
    cout << dectobin(7);
    return 0;
}

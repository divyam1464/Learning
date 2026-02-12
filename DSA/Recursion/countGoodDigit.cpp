#include<iostream>
using namespace std ; 

int power(long long a, long long b){
    const int MOD = 1e9+7;
    if ( b == 0 ) return 1 ;
    long long half_power = power(a,b/2);
    if ( b % 2 == 0 ){
        return half_power * half_power % MOD ;
    }
    else{
        return half_power * half_power % MOD * (a % MOD) % MOD ;
    }
}

int countGoodNumbers(long long n){
    const int MOD = 1e9+7;
    long long ed , od ;
    if ( n & 1 ){
        od = n/2 ;
        ed = (n+1)/2 ;
    }
    else{
        od = n/2 ;
        ed = n/2 ;
    }
    return ((power(5,ed)%MOD)*(power(4,od)%MOD)) % MOD ;
}

class Solution {
public:
    const int MOD = 1e9+7 ;
    int findPower(long long a, long long b){
        if ( b == 0 ){
            return 1 ;
        }
        long long half = findPower(a,b/2);
        long long result = (half * half) % MOD ;
        if ( b % 2 == 1 ){
            result = (result*a) % MOD ;
        }
        return result ;
    }
    int countGoodNumbers(long long n) {
        return (long long)findPower(5,(n+1)/2) * findPower(4,n/2) % MOD ;
    }
};

int main()
{
    int n = 4 ;
    cout << countGoodNumbers(5) ;
    return 0 ; 
}
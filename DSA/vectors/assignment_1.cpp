#include <iostream>
#include <vector>
using namespace std;
vector<int> setMismatch(vector<int> v)
{
    int n = v.size() ;
    int dup = 0 , mis = 0 ;
    vector<int> ans(n+1,0);
    vector<int> finalAns;
    // for(int x: v){
    //     ans[x]++ ;
    // }
    for ( int i = 0 ; i < n ; i++ ){
        ans[v[i]]++;
    }
    for ( int i = 1 ; i <= n ; i++ ){
        if(ans[i]==2){
            finalAns.push_back(i);
        }
        else if(ans[i] == 0){
            finalAns.push_back(i);
        }
    }
    return finalAns ;
}

int main()
{
    vector<int> v = {1,1};
    vector<int> ans = setMismatch(v);
    cout << ans[0] << " " << ans[1] ;
    return 0;
}
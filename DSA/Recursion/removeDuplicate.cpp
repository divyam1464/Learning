#include<iostream>
#include<string>
using namespace std ; 

void removeDuplicate(string str, string ans , int i , int map[26]){
    if ( i == str.size() ) {
        cout << "ans : " << ans << endl ; 
        return ;
    }
    int mapIdx = (int)(str[i] - 'a');
    
    if (map[mapIdx]) removeDuplicate(str,ans,i+1,map) ;
    else{
        map[mapIdx] = true;
        removeDuplicate(str,ans+str[i],i+1,map);
    }
}

// Second way to write without i and it will start from the last 
void removeDuplicate(string str, string ans , int map[26]){
    if ( str.size() == 0 ) {
        cout << "ans : " << ans << endl ; 
        return ;
    }
    int n = str.size() ;
    char ch = str[n-1] ;
    int mapIdx = (int)(str[n-1] - 'a');
    str = str.substr(0,n-1) ;
    
    if (map[mapIdx]){ 
        removeDuplicate(str, ans, map) ;
    } 
    else{  
        map[mapIdx] = true;
        removeDuplicate(str, ch+ans, map);
    }
}

int main()
{
    string str = "appnnacollege";
    string ans = "";
    int map[26] = {false} ;
    removeDuplicate(str,ans,0,map); // with i 
    removeDuplicate(str,ans,map);   // without i 
    return 0 ; 
}
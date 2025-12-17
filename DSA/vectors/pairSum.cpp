#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> v, int sum)
{
    int s = 0, e = v.size() - 1;
    int currSum = 0 ;
    vector<int> ans ;
    while (s < e)
    {
        if ( (v[s] + v[e]) == sum){
            ans.push_back(s);
            ans.push_back(e);
            return ans ;
        }
        else if ((v[s] + v[e]) > sum){
            e--;
        }
        else{
            s++;
        }
    }
    return ans ;
}

int main()
{
    vector<int> v = {
        3, 4, 7, 12, 18, 24, 31, 39, 45, 52, 60,
        68, 75, 83, 91, 100, 109, 118, 128, 139, 150,
        162, 175, 189, 204, 220, 237, 255, 274, 294, 315,
        337, 360, 384, 409, 435, 462, 490, 519, 549, 580,
        612, 645, 679, 714, 750, 787, 825, 864, 904, 945,
        987, 1030, 1074, 1119, 1165, 1212, 1260, 1309, 1359, 1410, 1690, 1970};
    int sum = 1694;
    vector<int> ans = pairSum(v,sum);
    cout << ans[0] << " " << ans[1] << endl ;
    return 0;
}
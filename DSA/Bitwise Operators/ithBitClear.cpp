#include <iostream>
using namespace std;

void ithBitClear(int n, int i)
{
    cout << "The number after clearing the ith bit is : " << (n & (~(1 << i))) << endl;
}

int main()
{
    int n, i;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Enter the value of i : ";
    cin >> i;
    ithBitClear(n,i);
    return 0;
}
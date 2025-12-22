#include <iostream>
using namespace std;
void ithBit(int x, int i)
{
    cout << ((x & (1 << i)) ? "The ith Bit is : 1\n" : "The ith Bit is : 0\n");
}
int main()
{
    int x, n;
    cout << "Enter the Number : "; cin >> x;
    cout << "Enter the i for which you want bit : "; cin >> n;
    ithBit(x, n);
    return 0;
}
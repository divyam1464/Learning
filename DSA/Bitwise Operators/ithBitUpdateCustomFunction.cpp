#include <iostream>
using namespace std;

void ithBitUpdate(int n, int i, int val)
{
    n = (n & ~(1 << i)) | (val << i);
    cout << "The Bit has been changed and the new number is : " << n ;
}

int main()
{
    int n, i, val;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the value of ith position : ";
    cin >> i;
    cout << "Enter the value of the bit to change to : ";
    cin >> val;
    ithBitUpdate(n, i, val);
    return 0;
}
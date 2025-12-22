#include <iostream>
using namespace std;

void evenOdd(int x)
{
    cout << ((x & 1) ? "The Number is Odd\n" : "The Number is Even\n");
}

int main()
{
    int x;
    cout << "Enter the number to check for Even or Odd by Bitwise Operations : ";
    cin >> x;
    evenOdd(x);
    return 0;
}
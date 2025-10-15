#include <iostream>
using namespace std;

// WAP  in C++ to check wheten a number is even or odd.

int main()
{
    int a;
    cout << "Enter Number ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}
#include <iostream>
using namespace std;

// WAP in c++ to check weather a given year is leap year or not.

int main()
{
    int a;
    cout << "Enter year ";
    cin >> a;
    if (a % 4 == 0)
    {
        cout << "Its a leap year";
    }
    else
    {
        cout << "Not a leap year";
    }
    return 0;
}
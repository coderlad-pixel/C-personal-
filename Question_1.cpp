#include <iostream>
using namespace std;

// WAP in C++ to find biggest of two no.s
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "Bigger no. is " << a;
    }
    else
    {
        cout << "Bigger no. is " << b;
    }
    return 0;
}
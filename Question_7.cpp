#include <iostream>
using namespace std;

// WAP in c++ to check whether you are eligible to cast a vote or not.

int main()
{
    int age;
    cout << "Enter your age ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Eligible to cast a vote";
    }
    else
    {
        cout << "Not Eligible";
    }
    return 0;
}
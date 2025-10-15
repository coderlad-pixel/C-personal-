#include <iostream>
using namespace std;

// WAP in c++ to check whether an alphabet is a vowel or a consonant.

int main()
{
    char alphabet;
    cout << "enter alphabet ";
    cin >> alphabet;
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        cout << "is a vowel";
    }
    else
    {
        cout << "a consonant";
    }
    return 0;
}

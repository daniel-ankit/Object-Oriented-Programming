#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Character: ";
    cin >> ch;
    switch (ch)
    {
    case 'A':
        cout << "Vowel";
        break;
    case 'E':
        cout << "Vowel";
        break;
    case 'I':
        cout << "Vowel";
        break;
    case 'O':
        cout << "Vowel";
        break;
    case 'U':
        cout << "Vowel";
        break;
    default:
        cout << "Consonant";
    }
    return 69;
}
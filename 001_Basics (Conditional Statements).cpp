#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age>150 || age<1)
        cout << "Invalid Age.";
    else if (age>=18)
        cout << "Eligible to drive.";
    else cout << "Not eligible to drive.";
    // if(condition) ? (true) : (false);
    return 69;
}
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string name = "Bheem";
    cout << "Enter the name: ";
    cin >> name;
    cout << "Entered name is: " << name << endl;
    cout << "Entered name length is: " << name.length() << endl;
    cout << name.substr(2,3) <<endl;

    return 69;
}
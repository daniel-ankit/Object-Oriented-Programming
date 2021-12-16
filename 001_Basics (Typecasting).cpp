#include<iostream>
using namespace std;

void increment (int &value)
{
    value++;
}

void increment2 (int* value)
{
    (*value)++;
}

int main()
{
    int a;
    cin >> a;
    increment(a);
    increment2(&a);
    cout << a;
    return 69;
}
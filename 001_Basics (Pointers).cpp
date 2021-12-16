#include<iostream>
using namespace std;
void swapp(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main()
{
    int a, b, *ptr;
    cout << "Enter  the values of a and b: ";
    cin >> a >> b;
    cout << "Address of a is: " << ptr << endl;

    cout << "Values of a and b before swap is: " << a << " " << b << endl;
    swapp(&a, &b);
    cout << "Values of a and b after swap is: " << a << " " << b << endl;
    return 69;
}
#include <iostream>
using namespace std;
union test {int a; int b; double c; double d;};
int main()
{
    test A;
    A.c = 20;
    A.a = 10;
    cout << A.b << " " << A.d << endl;
    cout << sizeof(test);
    return 0;
}

#include<iostream>
using namespace std;
union ABC{int a; float b;};

int main()
{
    ABC A;
    A.b=1.1;
    A.a;
    cout << A.b;
    return 69;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    protected:
    int a, b;
    public :
    //    INITIALIZATION LIST / SECTION

    //A(int N1=0, int N2=0) : a(N1), b(N2) {} 
    //A(int N1=0, int N2=0) : a(N1), b(2*N2){}
    //A(int N1=0, int N2=0) : a(N1), b(a+27){}

    //A(int N1, int N2) : b(N2), a(N1+b){}      // Intialization without default paramters gives an error when order of declartion is changed 
    A(int N1=0, int N2=0) : b(N2), a(N1+b){}        // This will work just fine.

    void print()
    {
        cout << a << " " << b;
    }
};

class B : virtual public A
{
    public:
    B(int N=0) : A(N){}
    void print()
    {
        A :: print();
    }
};

class C : virtual public A
{
    public:
    C(int N=0) : A(N){}
    void print()
    {
        A :: print();
    }
};

class D : public B, public C
{
    public:
    D(int N=0) : A(N){} //Called constructor of any one of the base class(B/C). Calling both gives an error.
    void print()
    {
        C :: print();
    }
};

int main()
{
    D obj(69);
    obj.print();
    return 69;
}
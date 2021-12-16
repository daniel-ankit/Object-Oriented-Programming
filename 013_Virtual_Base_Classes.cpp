#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    protected:
    int a;
    public :
    A(int N)
    {
        a=N;
    }
    void print()
    {
        cout << a;
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
    D obj(70);
    obj.print();
    return 69;
}

/*  Example 02

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student
{
    protected:
        int roll;
    public:
    student(int n=0)
    {
        roll=n;
    }
    void print()
    {
        cout << "Your roll number is: " << roll << endl;
    }
};

class test : virtual public student
{
    protected:
    int maths, sci;
    public:
    test(int n1=0, int n2=0)
    {
        maths=n1;
        sci=n2;
    }
    void print()
    {
        cout << "Your marks are: " << maths << " " << sci << endl;
    }
};

class sport : virtual public student
{
    protected:
    int score;
    public:
    sport(int s=0)
    {
        score = s;
    }
    void print()
    {
        cout << "Your sport score is: " << score << endl;
    }
};

class result : public test, public sport
{
    int total;
    public:
    result(int n=0, int n1=0, int n2=0, int s=0) : student(n), test(n1, n2), sport(s){}
    void display()
    {
        student :: print();
        test :: print();
        sport :: print();
        cout << "Total score:" << (maths+sci+score) << endl;
    }
};

int main()
{
    result S1(1, 90, 84, 75);
    S1.display();
    return 69;
}

*/
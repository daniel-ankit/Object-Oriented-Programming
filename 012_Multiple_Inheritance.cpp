/*
┌────────────────────────────────────────────────────┐
│2. Multiple Inheritance                A   B        │
│                                        \ /         │
│                                         C          │
└────────────────────────────────────────────────────┘
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Mom
{ 
    protected:
    char eyes;
    char hair;
    public:
    Mom(char E='B', char H='B')
    {
        eyes = E;
        hair = H;
    }
};

class Dad
{
    protected:
    double height;
    int intel;
    public:
    Dad(double HI=5.4, int I=7)
    {
        height = HI;
        intel = I;
    }
};

class Child : public Mom, public Dad
{
    protected:
    char gender;
    public:
    Child(char E='B', char H='B', double HI=5.4, int I=7, char G='-') : Mom(E, H), Dad(HI, I)
    {
        gender = G;
    }
    void print_qual()
    {
        cout << "Eye colour: " << eyes << ". Hair: " << hair << ". Height: " << height << ". Intelligence: " << intel << ". Gender: " << gender <<"."<< endl;
    }
};

int main()
{
    Child C1('G', 'R', 6.2, 10, 'M');
    C1.print_qual();
    return 69;
}

/*  Example 02 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    protected:
    int A, B;
    public:
    SimpleCalculator(int N1, int N2)
    {
        A=N1;
        B=N2;
    }
    void output()
    {
        cout << "A + B = " << A+B << endl;
        cout << "A - B = " << A-B << endl;
        cout << "A * B = " << A*B << endl;
        cout << "A / B = " << A/B << endl;
    }
};

class ScientificCalculator
{
    protected:
    int A, B;
    public:
    ScientificCalculator(int N1, int N2)
    {
        A=N1;
        B=N2;
    }
    void output()
    {
        cout << "A ^ B = " << pow(A, B) << endl;
        cout << "sqrt(A) = " << sqrt(A) << endl;
        cout << "sqrt(B) = " << sqrt(B) << endl;
    }
};

class both : public SimpleCalculator, public ScientificCalculator
{
    public:
    both(int N1, int N2) : SimpleCalculator(N1, N2), ScientificCalculator(N1, N2) {}
    void outputboth()
    {
        SimpleCalculator :: output();
        ScientificCalculator :: output();
    }
};

int main()
{
    both N(20, 10);
    N.outputboth();
    return 69;
}

*/
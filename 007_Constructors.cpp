#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    int N1;
    int N2;

    public:
    A(int n1, int n2)
    {
        N1=n1;
        N2=n2;
    }
    A(void)
    {
        N1=0;
        N2=0;
    }
    A(int n1) //N2 gets a garbage value.
    {
        N1=n1;
    }
    A(int n1=0, int n2=0) //This will be equivalent to creating 3 functions as above.
    {
        N1=n1;
        N2=n2;
    }
    void print()
    {
        cout << N1 << " " << N2 << endl;
    }
};

int main()
{
    A obj; //Implicit Call to default constructor
    obj.print();

    A obj2(2, 4); //Implicit Call to parameterized constructor
    obj2.print();

    obj = A(4, 5); //Explicit Call to parameterized constructor
    obj.print();
    return 0;
}

/*  Example 1 (Friend Function)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class point
{
    int X, Y;
    friend float distance(point, point);
    public:
    point(int x, int y)
    {
        X=x;
        Y=y;
    }
    void display()
    {
        cout << "(" << X << "," << Y << ")" << endl;
    }
};

float distance(point A, point B)
{
    return sqrt(pow(A.X-B.X, 2) + pow(A.Y-B.Y, 2));
}

int main()
{
    point A(1, 0), B(0, 79);
    A.display();
    B.display();
    cout << distance(A, B);
    return 0;
}
*/

/*  Example 2 (Dynamic Intilization of Objects)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Bank
{
    int P;
    int T;
    float Rf;
    int Ri;
    float I;
    public:
    Bank(){}
    Bank(int p, int t, float r);
    Bank(int p, int t, int r);
    void show();
};

Bank :: Bank(int p, int t, float r)
{
    P=p;
    T=t;
    Rf=r;
    I=P;
    for(int i=0; i<T; i++)
        I = I*(1+Rf);
}

Bank :: Bank(int p, int t, int r)
{
    P=p;
    T=t;
    Ri=float(r)/100;
    I=P;
    for(int i=0; i<T; i++)
        I = I*(1+Ri);
}

void Bank :: show()
{
    cout << "An amount of Rs. " << P << " invested for " << T << " years at " << Ri;
    cout << "% per annum returns an amount of Rs. " << I << endl;
}

int main()
{
    int P, T;
    float R;
    cin >> P >> T >> R;
    Bank obj(P, T, R);
    obj.show();
    return 0;
}

*/

/*  Example 3 (Copy Constructor)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NumSet
{
    int A, B;
    public:
    friend int Add(NumSet);
    NumSet(int n1=0, int n2=0) //Constructor
    {
        A=n1;
        B=n2;
    }
    NumSet(NumSet& O) //Copy Constructor
    {
        A = O.A;
        B = O.B;
    }
    void display();
};

int Add (NumSet O)
{
    return O.A + O.B;
}

void NumSet :: display()
{
    cout << A << " " << B << endl;
}

int main()
{
    NumSet N1(10, 20), N2(30, 40);
    NumSet N3;
    N3=N2;
    N1.display();
    N2.display();
    N3.display();
    cout << Add(N3);
    return 0;
}

*/

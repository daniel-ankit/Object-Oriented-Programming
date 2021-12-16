#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NumSet;
class calculate;

class calculate 
{
    public:
    int add(NumSet N);
    int sub(NumSet N);
    int mul(NumSet N);
    int div(NumSet N);
};

class NumSet 
{
    int A, B;

    friend class calculate;
    //friend int calculate :: add(NumSet);
    //friend int calculate :: sub(NumSet);
    //friend int calculate :: mul(NumSet);
    //friend int calculate :: div(NumSet);

    public :
    void assign(int a , int b)
    {
        this->A = a;
        this->B = b;
    }
};

//Declaring functions of calculate after the declaration of NumSet so that complier gets the forward declaration of the paramters used by thr member functions within.
int calculate :: add(NumSet N)
{
    return (N.A+N.B);
}

int calculate :: sub(NumSet N)
{
    return (N.A-N.B);
}

int calculate :: mul(NumSet N)
{
    return N.A*N.B;
}

int calculate :: div(NumSet N)
{
    return (N.A/N.B);
}

int main()
{
    NumSet N1;
    calculate N2;
    N1.assign(40, 10);
    cout << N2.add(N1) << endl;
    cout << N2.sub(N1) << endl; 
    cout << N2.mul(N1) << endl;
    cout << N2.div(N1) << endl;
    return 0;
}

/*  Example 1 : Friend Functions 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class comp
{
    public:
    int real;
    int imaginary;

    friend comp add(comp c1, comp c2);

    void assign(int R, int I)
    {
        this->real = R;
        this->imaginary = I;
    }

    void print()
    {
        cout << this->real << " + " << this->imaginary << "i" << endl; 
    }
};

comp add(comp c1, comp c2)
{
    comp c;
    c.imaginary = c1.imaginary+c2.imaginary;
    c.real = c1.real + c2.real;
    return c;
}

int main()
{
    comp C1, C2;
    C1.assign(10, 20);
    C2.assign(12, 18);

    C1.print();
    C2.print();

    comp C = add(C1, C2);

    C.print();
    return 0;
}

*/

/*  Example 1 : Friend Class

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A;
class B;

class A
{
    int X;
    friend int add(A, B);
    public :
    void assign(int val)
    {
        X=val;
    }
};

class B
{
    int X;
    friend int add(A, B);
    public :
    void assign(int val)
    {
        X=val;
    }
};

int add(A obj1, B obj2)
{
    return obj1.X + obj2.X; 
}

int main()
{
    A o1;
    o1.assign(10);
    B o2;
    o2.assign(25);
    cout << add(o1, o2);
    return 0;
}

*/

/*  Example 2 : Friend Class

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A;
class B;

class A
{
    int X;
    friend void swap(A* a, B* b);
    public:
    void assign(int data)
    {
        X=data;
    }

    void print()
    {
        cout << "Value: " << X << endl;
    }
};

class B
{
    int X;
    friend void swap(A* a, B* b);
    public:
    void assign(int data)
    {
        X=data;
    }

    void print()
    {
        cout << "Value: " << X << endl;
    }
};

void swap(A* a, B* b)
{
    int temp=a->X;
    a->X=b->X;
    b->X=temp;
}


int main()
{
    A obj1;
    B obj2;
    obj1.assign(10);
    obj2.assign(20);

    obj1.print();
    obj2.print();

    cout << endl << "Values after swap: " << endl;
    swap(&obj1, &obj2);
    obj1.print();
    obj2.print();

    return 0;
}

*/
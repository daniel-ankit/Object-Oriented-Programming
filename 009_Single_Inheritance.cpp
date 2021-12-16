/*           TABLE FOR FORMS OF INHERITANCE
┌────────────────────────────────────────────────────┐
|      TYPE                        INHERITANCE PATH  |
├────────────────────────────────────────────────────┤
│1. Single Inheritance                  A -→ B       │
├────────────────────────────────────────────────────┤
│2. Multiple Inheritance                A   B        │
│                                        \ /         │
│                                         C          │
├────────────────────────────────────────────────────┤
│3. Hierarchical Inheritance              A          │
│                                        / \         │
│                                       B   C        │
├────────────────────────────────────────────────────┤
│4. Multilevel Inheritance         A -→ B -→ C -→ D  │
├────────────────────────────────────────────────────┤
│5. Hybrid Inheritance       ┌──────────── A         │
│                            │            / \        │
│                            │           B   C       │
│                            │          / \ / \      │
│                            │         D   E   F     │
│                            ↓                       │
│                    Virtual Base Class              │
└────────────────────────────────────────────────────┘
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  BASE CLASS AND ITS METHODS
class Employee
{
    int ID;
    string Name;
    double Salary;
    static int NE;
    public:
    Employee (string N="NA", int I=5000, double S=0)
    {
        Name = N;
        ID = I;
        Salary = S;
        NE++;
    }
    void GET (string N="NA", int I=5000, double S=0)
    {
        //Only for Derived Class
        Name = N;
        ID = I;
        Salary = S;
    }
    static void n_element()
    {
        cout << "Number of Employees: " << NE << endl;
    }
    ~Employee(){NE--;}
    void show_Employee()
    {
        cout << ID << " " << Name << " " << Salary << endl;
    }
};
int Employee :: NE;

/*  DERIVED CLASS
    class {{derived class name}} : {{visiblity mode}} {{base class name}}
    Default visiblity mode is private.
    Private visiblity mode : Public members of the base class become private members of the derived class.
    Public visiblity mode : Public members of the base class become public members of the derived class.
    Private members of the base class are never inherited.
*/

class Managing : private Employee
{
    bool roomaccess;
    public:
    Managing(bool access = false, string N="NA", int I=5000, double S=0)
    {
        GET(N, I, S);
        roomaccess = access;
    }
    void show()
    {
        show_Employee();
        cout << "Room Access : " << roomaccess << endl;
    }
};
class Cleaning : private Employee
{
    public:
    Cleaning(string N="NA", int I=5000, double S=0)
    {
        GET(N, I, S);
    }
    void show()
    {
        show_Employee();
    }
};
class Cooking : private Employee
{
    bool Cook;
    public:
    Cooking(bool C=false, string N="NA", int I=5000, double S=0)
    {
        Cook = C;
        GET(N, I, S);
    }
    void show()
    {
        show_Employee();
        cout << "Cooking Permission : " << Cook << endl;
    }
};

int main()
{
    int id;
    string name;
    double sal;
    /*  ARRAY OF CLASS OBJECTS
    Employee E[4] = {Employee("Ankit", 20005, 25000), Employee("Rahul", 20006, 25000), Employee("Harry", 20007, 25000)};

    Employee E[10];
    for(int i=0; i<4; i++)
    {
        cin >> name >> id >> sal;
        E[i] = Employee(name, id, sal);
    }
    cout << " ID   Name  Salary "<< endl;
    for(int i=0; i<4; i++)
        E[i].show();
    */
    cout << " ID   Name  Salary"<< endl;

    Managing M(true, "Ankit", 10001, 25000);
    M.show();
    Cleaning C("Harry", 10002, 12000);
    C.show();
    Cooking CH(true, "Letti", 10003, 15000);
    CH.show();
    Employee :: n_element();
    return 69;
}
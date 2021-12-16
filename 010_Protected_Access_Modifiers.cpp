/*   TABLE FOR INHERITANCE

┌──────────────────────────────────────────────────────────────────────┐
│    DERIVATION  -→         PUBLIC         PRIVATE        PROTECTED    │
├──────────────────────────────────────────────────────────────────────┤
│ 1. PRIVATE MEMBERS          -               -               -        │
├──────────────────────────────────────────────────────────────────────┤
│ 2. PROTECTED MEMBERS     PROTECTED       PRIVATE        PROTECTED    │
├──────────────────────────────────────────────────────────────────────┤
│ 3. PUBLIC MEMBERS         PUBLIC         PRIVATE        PROTECTED    │
└──────────────────────────────────────────────────────────────────────┘

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class father
{
    public:
    string Name;
    private:
    bool Affair;  //  Won't be accessed at any cost!
    protected:
    int Salary;
    public:
    void GET(string name="N/A", int salary=0, bool affairs=false)
    {
        Name=name;
        Salary = salary;
        Affair = affairs;
    }
};

class son : private father
{
    public:
    son(string name="N/A", int salary=0, bool affairs=false)
    {
        GET(name, salary, affairs);
    }
    void printname()
    {
        cout << "Name : "<< Name << endl;
    }
    void printsalary()
    {
        cout << "Salary : "<< Salary << endl;
    }
    void printaffairs()
    {
        cout << "Affairs : "<< Affair << endl;
    }
};

int main()
{
    son S("Atithi", 25000, true);
    S.printname();
    S.printsalary();
    S.printaffairs();
    return 69;
}
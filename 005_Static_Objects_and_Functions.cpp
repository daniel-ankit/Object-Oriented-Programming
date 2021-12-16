#include<iostream>
using namespace std;
#define lld long long int

class Student
{
    int roll;
    string name;
    string stand;
    lld phone;
    static int count; //static data member of class Student

    public:
    void assign(int R, string N, string S, lld P)
    {
        this->roll = R;
        this->name = N;
        this->stand =S;
        this->phone = P;
        count++;
    }

    void print()
    {
        cout << "Details of Student " << count << ":" << endl << this->roll << " " << this->name << " " <<this->stand << " " << this->phone << endl << endl; 
    }

    static void T_Students()
    {
        //Cannot access any objects of the class only static objects
        cout << "Data stored for " << count << " students.";
    }
};

int Student :: count;

int main()
{
    Student S1, S2, S3;
    S1.assign(1, "Ankit", "(XII A)", 7372898196);
    S1.print();

    S2.assign(2, "Rahul", "(XII A)", 7372894565);
    S2.print();

    S3.assign(3, "Mohit", "(XII A)", 7539598196);
    S3.print();

    Student :: T_Students();
    return 69;
}
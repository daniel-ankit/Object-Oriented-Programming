#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int complex;

    public:
    void assign(int R, int C)
    {
        real = R;
        complex = C;
    }

    void show()
    {
        cout << real << " + " << complex << "i" << endl;
    }

    void add(Complex A, Complex B)
    {
        real = A.real + B.real;
        complex = A.complex + B.complex;
    }
};

int main()
{
    Complex C1, C2, C3;
    C1.assign(2, 3);
    C1.show();
    C2.assign(4, 8);
    C2.show();
    C3.add(C1, C2);
    C3.show();
    getchar();
    return 69;
}

/*   Example 0 : STUDENTS RECORD USING STRUCTURES

#include <iostream>
#include <string.h>
using namespace std;

struct Student
{
    string name;
    int marks[];
};

int main()
{
    int N, n;
    cout << "\nEnter the number of student: ";
    cin >> N;
    cout << "Enter the number of subjects: ";
    cin >> n;
    Student S[N];
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        cout << "\nEnter data for roll number " << i + 1 << ": " << endl;
        cout << endl << "Enter the name of student: ";
        cin >> S[i].name;
        fflush(stdin);
        cout << "Enter the marks of " << n << " subjects: ";
        for (int j = 0; j < n; j++)
        {
            cin >> S[i].marks[j];
            sum += S[i].marks[j];
        }
        if (sum / (n * 100) >= 60)
            cout << "First Division." << endl;
        else if (sum / (n * 100) >= 50)
            cout << "Second Divison" << endl;
        else if (sum / (n * 100) >= 40)
            cout << "Third Divison" << endl;
    }
    cout << endl;
    return 69;
}

*/

/*   Example 1 : EMPLOYEE RECORDS USING CLASSES

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Emp
{
public:
    string name;
    int id;
    char gender;
    int salary;

    void emp(string N, int I, char G, int S)
    {
        gender = G;
        id = I;
        name = N;
        salary = S;
    }

    void print()
    {
        cout << id << " " << name << " " << gender << " " << salary << endl;
    }

};

int main()
{
    unsigned short int n;
    cout << "Enter the number of Employees: ";
    cin >> n;
    Emp E[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        string Name;
        int Salary, ID;
        char Gender;
        cout << "Enter details for " << i + 1 << " employee: " << endl << "Enter Employee ID: ";
        cin >> ID;
        cout << "Enter Name: ";
        cin >> Name;
        fflush(stdin);
        cout << "Enter Gender: ";
        cin >> Gender;
        fflush(stdin);
        cout << "Enter Salary: ";
        cin >> Salary;
        E[i].emp(Name, ID, Gender, Salary);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        E[i].print();
    cout << endl;
    return 69;
}

*/

/*   Example 2 : ANIMALS USING CLASSES

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct Animal
{
    string Name;
    string sound;
    int n_legs;
};


class Animal
{
    private:
    char gender;

    public:
    string Name;
    string sound;
    short int n_legs;
    void assign(string N, string S, short int L, char G);
    void print();
};

void Animal :: assign(string N, string S, short int L, char G)
    {
    Name = N;
    sound = S;
    n_legs = L;
    gender = G;
    }

void Animal :: print()
    {
        cout << Name << " " << sound << " " << setw(6) << n_legs << setw(10) << gender << endl;
    }


int main()
{
    Animal A[5];
    cout << "Name    Sound   No. of Legs  Gender" <<endl;
    A[0].assign("Cat    ", "Meow   ", 4, 'F');
    A[1].assign("Rabbit ", "Squeak ", 4, 'M');
    A[2].assign("Dog    ", "Bhow   ", 4, 'M');
    A[3].assign("Cow    ", "Mooh   ", 4, 'F');
    A[4].assign("Quail  ", "Call   ", 2, 'F');
    for(int i=0; i<5; i++)
    A[i].print();
    return 69;
}

*/

/*   Example 3 : GRADING SYSTEM USING CLASSES

#include <iostream>
#include <iomanip>
#include<bits.h>
using namespace std;
#define lli long long int

class Student
{
public:
    string Name;
    short int marks[5];
    lli phone;
    char gender;

    void assign(string N, short int M[5], lli P, char G)
    {
        Name = N;
        for (int i = 0; i < 5; i++)
            marks[i] = M[i];
        phone = P;
        gender = G;
    }

    int avg()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
        return (total / 5);
    }

    char grade()
    {
        if(avg() >= 90) return 'A';
        if(avg() >= 80) return 'B';
        if(avg() >= 70) return 'C';
        if(avg() >= 60) return 'D';
        if(avg() >= 50) return 'E';
        return 'F';
    }

    void print()
    {
        string subjects[5] = {"English", "Maths", "Hindi", "Science", "IT"};
        cout << Name << "  Gender: " << gender << "  Phone: " << phone << endl << "Marks of the 5 subjects: " << endl;
        for (int i = 0; i < 5; i++)
        
            cout << subjects[i] << " " << marks[i] << endl;
        cout << "Average marks of the student: " << (float)avg() << endl;
        cout << "Grade: " << grade() << endl << endl;
    }
};

int main()
{
    unsigned short int n;
    cout << "Enter the number of Students: ";
    cin >> n;
    Student S[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        string Name;
        short int marks[5];
        lli phone;
        char gender;
        cout << "Enter details for roll no." << i + 1 << " :" << endl << "Enter Name: ";
        cin >> Name;
        fflush(stdin);
        cout << "(M/F): ";
        cin >> gender;
        cout << "Enter phone number of the student: ";
        cin >> phone;
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter marks of subject " << j + 1 << " :";
            cin >> marks[j];
        }
        S[i].assign(Name, marks, phone, gender);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Roll No.: " << i + 1 << " ";
        S[i].print();
    }
    return 69;
}

*/
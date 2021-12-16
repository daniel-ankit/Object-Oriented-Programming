/*
┌────────────────────────────────────────────────────┐
│4. Multilevel Inheritance      A -→ B -→ C -→ D     │
└────────────────────────────────────────────────────┘
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
//  BASE CLASS AND ITS METHODS
class Student
{
    protected:
    int Roll; 
    public:
    string Name;
    void GET1(int roll=00, string name ="NA")
    {
        Roll = roll;
        Name = name;
    }
    void print()
    {
        cout << Roll << " " << Name << " " << endl;
    }
};


//  BASE CLASS OF GRADE (DERIVED FROM STUDENT)
class Exam : public Student
{
    protected:
    int M1, M2, M3, M4, M5;
    public:
    void GET2(int roll = 0, string name="NA", int m1=0, int m2=0, int m3=0, int m4=0, int m5=0)
    {
        GET1(roll, name);
        M1 = m1;
        M2 = m2;
        M3 = m3;
        M4 = m4;
        M5 = m5;
    }
    void print()
    {
        Student :: print();
        cout << "Marks: ";
        cout << M1 << " " << M2 << " " << M3 << " " << M4 << " " << M5 << " " << endl;
    }
};

//  DERIVED FROM EXAM 
class Grade : public Exam
{
    protected:
    char G;
    public:
    Grade(int roll = 00, string name="NA", int m1=0, int m2=0, int m3=0, int m4=0, int m5=0)
    {
        GET2(roll, name, m1, m2, m3, m4, m5);
    }
    void print()
    {
        Exam :: print();
        if ((M1+M2+M3+M4+M5)/5>90) G='A';
        else if ((M1+M2+M3+M4+M5)/5>70) G='B';
        else if ((M1+M2+M3+M4+M5)/5>50) G='C';
        else if ((M1+M2+M3+M4+M5)/5>=40) G='D';
        else G='F';
        cout << "Grade: " << G << endl;
    }
};

int main()
{
    Grade S{1, "Ankit", 95, 99, 85, 86, 70};
    S.print();
    return 69;
}
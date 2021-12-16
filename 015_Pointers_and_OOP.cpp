#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    public :
    int real, img;
    Complex(int r=0, int i=0) : real(r), img(i){}
    friend void print(Complex);
};

void print(Complex C)
{
    cout << C.real << " + " << C.img << "i" << endl;
}

int main()
{
    Complex C1(2, 5);
    Complex* P = &C1;
    print(*P);
    return 69;
}
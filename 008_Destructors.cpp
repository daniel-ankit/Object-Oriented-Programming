#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NumSet
{
    int N1, N2;
    static int C;
    public:
    NumSet(int A=0, int B=0)
    {
        C++;
        N1 = A;
        N2 = B;
    }
    ~NumSet() // Destructor is called for blocks, not for a object.
    {
        C--;
    }
    void print();
    static void n_Element()
    {
        cout << C << endl;
    }
};

int NumSet  :: C;
void NumSet :: print()
{
    cout << N1 << " " << N2 << endl;
}

int main()
{
    NumSet A;
    {
        NumSet A1(10, 15), A2(20, 89);
        A1.print();
        A2.print();
        NumSet :: n_Element();
    }
    NumSet :: n_Element();
    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i=0, k=0;
    cin >> n;
    while (i<10)
    {
        cout << n << "x" << setw(2) << i+1 << "="<< setw(2) << (i+1)*n << endl;
        i++;
    }
    
    cout << endl;
    for(int j=1; j<=10; j++)
        cout << n << "x" << setw(2) << j << "="<< setw(2) << j*n << endl;
    cout << endl;

    do
        {
            cout << n << "x" << setw(2) << k+1 << "="<< setw(2) << (k+1)*n << endl;
            k++;
        }
    while (k<10);
    return 69;
}
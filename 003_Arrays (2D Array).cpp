#include<iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the size of matrix (i.e. row and columns): ";
    cin >> row >> column;

    int  a[row][column], b[row][column];
    cout << "Enter the first matrix: " << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        cin >> a[i][j];
    }

    cout << "Enter the second matrix: " << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        cin >> b[i][j];
    }

    cout << "Sum of the two matrix is: " << endl;
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
    return 69;
}
#include<iostream>
using namespace std;
int sum (int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int avg (int a, int b)
{
    int avg;
    avg = (sum(a,b)/2);
    return avg;
}

int main()
{
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Sum of the numbers: " << sum(a,b) << endl;
    cout << "Average of the numbers: " << avg(a,b);
    return 69;
}
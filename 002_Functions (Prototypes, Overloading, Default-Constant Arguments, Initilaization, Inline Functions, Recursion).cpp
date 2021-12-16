#include <iostream>
using namespace std;

int power(int base, int exp);
void swap(int* a, int* b);
void swap2(int& a, int& b);
inline int product(int a, int b);
inline int product(int a, int b, int c);
float SI(int principal, int time, float rate = 4.28)
{
    return (principal*rate*time)/100;
}
int factorial(int num);
int factorial2(int num);
int fibonacci(int num); 
int fibonacci2(int num);

int main()
{
    int m = 20, n = 5;
    cout << "Enter the base and exponent: ";
    cin >> m >> n;
    cout << "Value: " << power(m, n) << endl;
    cout << "Values before swapping: " << m << " " << n << endl;
    swap(m, n);
    cout << "Swapped values of base and exponent: " << m << " " << n << endl;
    cout << "Value: " << power(m, n) << endl;
    cout << product(m,n) << endl;
    int p=10000, t=2, r=10;
    cout << SI(p, t) << endl;
    cout << fibonacci2(n) << endl;
    cout << "Product of " << m << " and " << n << " is: " << product(m,n) << endl;
    cout << "Product of " << m << " and " << n << " is: " << product(m,n,1) <<endl;
    return 69;
}

int power(int base, int exp)
{
    int pow = 1;
    for (int i = 1; i <= exp; i++)
        pow *= base;
    return pow;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

void swap2(int& a, int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

inline int product(int a, int b, int c)
{
    return a*b*c;
}

inline int product(int a, int b)
{
    return a*b;
}

//float SI(int principal, int time, float rate = 4.28)
//{
//    return (principal*rate*time)/100;
//}

int factorial(int num)
{
    if (num<=1)
    return 1;
    return num * factorial(num-1);
}

int factorial2(int num)
{
    int ans=1;
    for(int i=2; i<=num; i++)
    ans*=i;
    return ans;
}

int fibonacci(int num)
{
    int a=1, b=1, c;
    if(num==1 || num==2)
    return 1;
    return fibonacci(num-1) + fibonacci(num-2);
}

int fibonacci2(int num)
{
    if(num==1 || num==2)
    return 1;
    int a=1, b=1, c=0;
    for(int i=2; i<num; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
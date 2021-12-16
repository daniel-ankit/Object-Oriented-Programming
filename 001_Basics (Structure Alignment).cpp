#include <iostream>
using namespace std;
struct Point1
{
    char a;
    int b;
    int c;
    double d;
};

struct Point2
{
    char a;
    int b;
    int c;
    double d;
} __attribute__((packed));

union money{
    int rupees;
    int pounds;
    int dollar;
    float data;
};

int main()
{
    cout << sizeof(Point1) << endl;
    cout << sizeof(Point2) << endl;
    cout << sizeof(money) << endl;

    money amt;
    amt.rupees = 500;
    cout << amt.rupees << endl;
    amt.dollar = 25;
    cout << amt.rupees << endl;
    cout << amt.dollar << endl;

    enum Money{Dollar, Rupees, Pounds};
    Money m1 = Pounds;
    cout << m1;

    return 69;
}
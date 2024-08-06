#include <iostream>
using namespace std;

int main()
{
    int a, sum = 0, power = 1;
    cout << "Enter the binary number :" << endl;
    cin >> a;
    while (a > 0)
    {
        sum += (a % 10) * power;
        a = a / 10;
        power = power * 2;
    }
    cout << "Decimal eqivalent is : " << sum << endl;

    return 0;
}
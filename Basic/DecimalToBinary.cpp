#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0 , power=1;
    cout << "Enter the decimal number : " << endl;
    cin >> n;
    while (n > 0)
    {
        sum = sum + (n % 2)*power;
        n = n / 2;
        power = power * 10;
    }
    cout << "Binary equivalent : " << sum << endl;
    return 0;
}
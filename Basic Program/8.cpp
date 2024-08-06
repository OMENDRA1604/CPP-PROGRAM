#include <iostream>
using namespace std;
int main()
{
    int a, count = 0, sum = 0;
    cout << "Enter any number:" << endl;
    cin >> a;
    if (a == 0)
        count++;
    while (a != 0)
    {
        sum = sum + a % 10;
        a = a / 10;
        count++;
    }
    cout << "Number of Digits are : " << count << endl;
    cout << "Sum of digits are : " << sum << endl;
    return 0;
}
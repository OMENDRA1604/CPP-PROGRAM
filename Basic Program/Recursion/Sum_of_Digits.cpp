#include <iostream>
using namespace std;

int Sum(int n)
{
    if(n > 0 && n <= 9)
        return 0;
    else
    {
        return (n % 10) + Sum(n / 10);
    }
}

int main()
{
    int num;
    cout << "Enter the number :" << endl;
    cin >> num;
    int result = Sum(num);
    cout << "Addition of digits : " << result << endl;
    return 0;
}

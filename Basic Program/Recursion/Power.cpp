#include <iostream>
using namespace std;

/*int pow(int n, int m)
{
    if (m == 0)
        return 1;
    else
    {
        return n * pow( n, m - 1);
    }
}*/

int pow(int n, int m)
{
    if (m == 0)
        return 1;
    if (m % 2 == 0)
    {
        int r = pow(n, m / 2);
        return r * r;
    }
    if (m % 2 != 0)
    {
        int r = pow(n, m / 2);
        return n * r * r;
    }
}

int main()
{
    int n, m;
    cout << "Enter the number and power respectively:" << endl;
    cin >> n >> m;
    int result = pow(n, m);
    cout << "Answer : " << result << endl;
    return 0;
}
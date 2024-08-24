#include <iostream>
using namespace std;
int GCD(int x, int y)
{
    if (y > x)
        return GCD(y, x);
    if (y == 0)
        return x;
    return GCD(y, x % y);
}

/*int GCD(int x, int y, int n)
{
    if (x <= 1 || y <= 1)
    {
        return 1;
    }
    if (x % n == 0 && y % n == 0)
    {
        x = x / n;
        y = y / n;
        return GCD(x, y, n) * n;
    }
    else
    {
        return GCD(x, y, n + 1);
    }
}*/

int main()
{
    int x, y;
    cin >> x >> y;

    /*int n = 2, divisor = 1;

    while (x > 1 && y > 1)
    {
        if (x % n == 0 && y % n == 0)
        {
            divisor *=  n;
            x = x/n;
            y = y/n;
        }
        else
        {
            n++;
        }
    }*/

    cout << GCD(x, y);

    return 0;
}
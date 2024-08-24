#include <iostream>
using namespace std;

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

int digits(int n)
{
    int i = 0;
    while (n > 0)
    {
        i++;
        n = n / 10;
    }
    return i;
}

int armstrong(int n, int d)
{
    if (n == 0)
    {
        return 0;
    }
    return pow(n % 10, d) + armstrong(n / 10, d);
}

int main()
{
    int n;
    cin >> n;
    int d = digits(n);

     if(n == armstrong(n, d)) 
     {
        cout << "YES";
     }
     else 
     {
        cout << "NO";
     }
    
    return 0;
}

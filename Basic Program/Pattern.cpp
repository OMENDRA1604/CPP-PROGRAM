#include <iostream>
using namespace std;
void triangular(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void invtri(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = i; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void tri(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void numrec(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = i; j <= x; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void invnumrec(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = i; j <= x; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void numtri(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int a, b;
    do
    {
        cout << "Enter the number of lines  :" << endl;
        cin >> a;
        cout << "Enter the number of which pattern you want to print : \n";
        cout << "1. Triangular Pattern \n";
        cout << "2. Inverted Triangular Pattern \n";
        cout << "3. Triangle \n";
        cout << "4. Numeric Rectangle \n";
        cout << "5. Numeric triangle \n";
        cout << "0. Exit \n";
        cin >> b;
        switch (b)
        {
        case 1:
            triangular(a);
            break;
        case 2:
            invtri(a);
            break;
        case 3:
            tri(a);
            break;
        case 4:
            numrec(a);
            break;
        case 5:
            numtri(a);
            break;
        default:
            break;
        }
    } while (b != 0);
    return 0;
}
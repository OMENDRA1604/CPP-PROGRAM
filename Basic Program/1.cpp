#include <iostream>  // Preprocessor Directives (Header file includes I/O fun)
using namespace std; // cout included in namespace std
int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    sum = a + b;
    cout << "SUM is :" << sum << endl;
    sum = b;
    b = a;
    a = sum;
    cout << "a :" << a << endl
         << "b :" << b << endl;
    return 0;
}
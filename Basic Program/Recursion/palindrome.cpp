#include <iostream>
using namespace std;

bool func(int num, int *temp)
{
    if (num >= 0 && num <= 9)
    {
        int last_temp = (*temp) % 10;
        (*temp) /= 10;
        return (num == last_temp);
    }
    bool result = (func(num / 10, temp) && (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

int main()
{
    int n;
    cin >> n;
    int anothernum = n;
    int *temp = &anothernum;
    cout << func(n, temp) << endl;
    return 0;
}
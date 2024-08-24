#include <iostream>
using namespace std;

void func(int num, int k)
{
    if (k < 1)
    {
        return;
    }
    else
    {
        func(num, k - 1);
        cout << num * k << " ";
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    func(n, k);
    return 0;
}
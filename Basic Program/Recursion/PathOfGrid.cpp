#include <iostream>
#include <vector>
using namespace std;
int func(int m, int n, int i, int j)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= m || j >= n)
    {
        return 0;
    }
    return func(m, n , i, j+1) + func(m, n, i+1, j);
}

int main()
{
    int m, n;
    cin >> m >> n;
    int result = func(m, n, 0, 0);
    cout << result << " ";

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void print(int *a, int i, int n)
{
    if (i == n)
        return;
    else
    {
        cout << a[i] << endl;
        print(a, i + 1, n);
    }
}

int main()
{
    int arr[5] = {
        1,
        2,
        3,
        4,
        5,
    };

    print(arr, 0, 5);

    return 0;
}
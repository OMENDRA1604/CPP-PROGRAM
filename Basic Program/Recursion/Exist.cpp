#include <iostream>
#include <vector>
using namespace std;

bool func(int *arr, int idx, int n , int size)
{
    if (idx == size)
    {
        return false;
    }

    return (arr[idx] == n) || func(arr, idx + 1, n , size);
}

int main()
{
    int arr[] = {
        5,
        4,
        8,
        9,
        3,
        2,
        0,
    };
    int n;
    cin >> n;

    cout << func(arr, 0, n ,7);
    return 0;
}
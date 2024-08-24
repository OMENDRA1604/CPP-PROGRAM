#include <iostream>
using namespace std;

int Sum(int *arr, int idx, int n)
{
    if (idx == n)
    {
        return 0;
    }

    return arr[idx] + Sum(arr, idx + 1, n);
}

int main()
{
    int arr[] = {3, 4, 9, 10, 4};

    int result = Sum(arr, 0, 5);
    cout << result << endl;

    return 0;
}
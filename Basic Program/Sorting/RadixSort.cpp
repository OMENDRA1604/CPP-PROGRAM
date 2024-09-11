#include <iostream>
#include <vector>
using namespace std;

void CountSort(int *arr, int n, int pos)
{
    vector<int> freq(10, 0);
    for (int i = 0; i < n; i++)
    {
        freq[((arr[i] / pos) % 10)]++;
    }
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[((arr[i] / pos) % 10)]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
    return;
}

void RadixSort(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int pos = 1; (max / pos) > 0; pos *= 10)
    {
        CountSort(arr, n, pos);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    RadixSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
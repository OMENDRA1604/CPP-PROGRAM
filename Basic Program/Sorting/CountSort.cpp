#include <iostream>
#include <vector>
using namespace std;

void CountSort(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    vector<int> freq(max + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        freq[i] += freq[i - 1];
    }
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
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
    CountSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

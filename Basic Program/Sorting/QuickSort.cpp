#include <iostream>
using namespace std;

int partition(int *arr, int idx, int n)
{
    int pivot = arr[n];
    int i = idx - 1;
    for (int j = idx; j < n ; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[n]);
    return i + 1;
}

void QuickSort(int *arr, int idx, int n)
{
    if (idx >= n)
    {
        return;
    }

    int pi = partition(arr, idx, n);
    QuickSort(arr, idx, pi-1);
    QuickSort(arr, pi + 1, n);
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
    QuickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
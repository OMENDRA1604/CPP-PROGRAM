#include<iostream>
using namespace std;
// Maximum No . of swaps = n(n-1)/2
// Time Complexity = O(n^2)

/*void SelectionSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                swap(arr[i], arr[j + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    return;
}*/



void SelectionSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        int min_Index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min_Index] > arr[j])
            {
                min_Index = j;
                flag = true;
            }
        }
        if (i != min_Index)
        {
            swap(arr[i],arr[min_Index]);
        }
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
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
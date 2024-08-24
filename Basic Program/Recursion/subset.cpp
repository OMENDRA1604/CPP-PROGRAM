#include <iostream>
#include <vector>
using namespace std;
void func(int *arr, int idx, int n, vector<int> &result, int sum)
{
    if (idx == n)
    {
        result.push_back(sum);
        return;
    }
    func(arr, idx + 1, n, result, sum + arr[idx]);
    func(arr, idx + 1, n, result, sum);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> r;
    func(arr, 0, n, r, 0);
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BucketSort(float *arr, int n)
{
    // Step :1

    vector<vector<float>> Bucket(n, vector<float>());

    float max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    float range = (max - min) / n;

    // Step :2
    for (int i = 0; i < n; i++)
    {
        int index = (arr[i] - min) / range;
        Bucket[index].push_back(arr[i]);
    }

    // Step :3
    for (int i = 0; i < n; i++)
    {
        if (!Bucket[i].empty())
        {
            sort(Bucket[i].begin(), Bucket[i].end());
        }
    }

    // Step :4
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < Bucket[i].size(); j++)
        {
            arr[k++] = Bucket[i][j];
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BucketSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    int top = 0;
    int right = v[0].size() - 1;
    int bottom = v.size() - 1;
    int left = 0;

    int dire = 0;

    int val = 1;

    while (left <= right && top <= bottom)
    {
        // left --> right
        if (dire == 0)
        {
            for (int col = left; col <= right; col++)
            {
                v[top][col] = val++;
            }
            top++;
        }
        // top --> bottom
        if (dire == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                v[row][right] = val++;
            }
            right--;
        }
        // right --> left
        if (dire == 2)
        {
            for (int col = right; col >= left; col--)
            {
                v[bottom][col] = val++;
            }
            bottom--;
        }
        // bottom --> top
        if (dire == 3)
        {
            for (int row = bottom; row >= top; row--)
            {
                v[row][left] = val++;
            }
            left++;
        }
        dire = (dire + 1) % 4;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
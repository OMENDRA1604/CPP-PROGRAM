#include <iostream>
#include <vector>
using namespace std;

void spiralOrder(vector<vector<int>> &v)
{
    int top = 0;
    int right = v[0].size() - 1;
    int bottom = v.size() - 1;
    int left = 0;

    int dire = 0;

    while (left <= right && top <= bottom)
    {
        // left --> right
        if (dire == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << v[top][col] << " ";
            }
            top++;
        }
        // top --> bottom
        if (dire == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << v[row][right] << " ";
            }
            right--;
        }
        // right --> left
        if (dire == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << v[bottom][col] << " ";
            }
            bottom--;
        }
        // bottom --> top
        if (dire == 3)
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << v[row][left] << " ";
            }
            left++;
        }
        dire = (dire + 1) % 4;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    spiralOrder(v);

    return 0;
}
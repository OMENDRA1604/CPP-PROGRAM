#include <iostream>
#include <vector>
using namespace std;

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
    int x, count = 0, row = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 1)
            {
                x = m - j;
                cout << "X :" << x << endl;
                break;
            }
        }
        if (x > count)
        {
            count = x;
            row = i;
        }
    }

    cout << "Maximum numbers of One is " << count << " in Row : " << row;

    return 0;
}

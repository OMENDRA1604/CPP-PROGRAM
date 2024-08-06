#include<iostream>
#include<vector>
using namespace std;
// 1 2 3  1 4 7   7 4 1
// 4 5 6  2 5 8   8 5 2
// 7 8 9  3 6 9   9 6 3


int main()
{
    int n,m; cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    cout << "After swapping : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] <<" ";
        }
        cout<< endl;
    }



    for (int i = 0; i < n; i++)
    {
            swap(v[i][0] , v[i][m-1]);
    }
    cout << "Array after turning : "<< endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] <<" ";
        }
        cout<< endl;
    }

    return 0;
}
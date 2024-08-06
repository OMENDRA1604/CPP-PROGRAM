#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<vector<int>> pascal_triangle(int n)
{
    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1); // Ensure the inner vector has the correct size
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }

    return pascal;
}

/*int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    vector<vector<int>> ans;

    ans = pascal_triangle(n);
    
    int width = 4; // Adjust the width based on the number size for better alignment
    for (int i = 0; i < ans.size(); i++)
    {
        cout << string((n - i - 1) * (width / 2), ' '); // Print leading spaces for triangle alignment
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << setw(width) << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    vector<vector<int>> ans;

    ans = pascal_triangle(n);
    
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
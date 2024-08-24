#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v, int n) {
    if (n <= 0) return; // Base case
    cout << v[n-1] << " ";
    print(v, n-1); // Recursive call
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    print(v, n);

    return 0;
}
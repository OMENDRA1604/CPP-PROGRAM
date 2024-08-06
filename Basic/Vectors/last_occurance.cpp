#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0, occ, gre = 0;
    cout << "Enter the number of elment :";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int key;
    cout << "Enter the elment to find : ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            occ = i;
            count++;
        }
        if (v[i] > key)
        {
            gre++;
        }
    }
    cout << "last Occurance :" << occ << endl;
    cout << "No. of occurance : " << count << " And No. greater than key : " << gre;

    return 0;
}
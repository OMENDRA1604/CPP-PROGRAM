#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    v.insert(v.begin()+3,10);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout<< endl;

    v.erase(v.end()-3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }

    return 0;
}
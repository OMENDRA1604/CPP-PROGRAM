#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 6, 7, 7, 6, 1};
    int max = v[0], sec_max = v[0] ;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] > sec_max && v[i] != max)
        {
            sec_max = v[i];
        }
    }
    cout << "Second largest element : " << sec_max << endl;
    return 0;
}
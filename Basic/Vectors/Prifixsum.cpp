#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum += v[i];
        v[i]=sum;
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
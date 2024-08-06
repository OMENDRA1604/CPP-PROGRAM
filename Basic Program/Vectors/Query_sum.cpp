#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int n; cin>> n;
    vector<int> v(n+1 ,0);
    for(int i=1; i<=n ; i++)
    {
        cin >> v[i];
    }
    for(int i=1; i<=n ; i++)
    {
        v[i] += v[i];
    }

    int q;
    cout<< "Enter number of quries : "<< endl;
    cin >> q;
    while(q--)
    {
        int l ; 
        cout<< "Enter l :"<< endl;
        cin>>l;
        int r ; 
        cout<< "Enter r :"<< endl;
        cin>>r;
        cout<< "Sum between l and r : " << v[r] -v[l-1] <<endl;
    }

    /*int l ; 
    cout<< "Enter l :"<< endl;
    cin>>l;
    int r ; 
    cout<< "Enter r :"<< endl;
    cin>>r;

    int pre_l=0, pre_r =0;
    for(int i=0; i<l-1 ; i++)
    {
        pre_l += v[i];
    }
    for(int i=0; i<r ; i++)
    {
        pre_r += v[i];
    }

    cout<<"Sum between l and r :" << pre_r - pre_l << endl;*/

    return 0;
}
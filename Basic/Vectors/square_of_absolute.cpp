#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort_square(vector<int> &v)
{
    int lpt=0,rpt=v.size()-1;
    vector<int> ans;
    int i=0;
    while(lpt<=rpt)
    {
        if(abs(v[lpt])>abs(v[rpt]))
        {
            ans.push_back(v[lpt]*v[lpt]);
            lpt++;
        }
        else
        {
            ans.push_back(v[rpt]*v[rpt]);
            rpt--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<"Array after sorting :"<<endl;
    for(int i=0;i<v.size() ;i++)
    {
        cout<<ans[i]<<endl;
    }
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n ;i++)
    {
        cin>> v[i];
    }
    sort_square(v);
    return 0;
}
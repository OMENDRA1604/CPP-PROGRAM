#include<iostream>
#include<vector>
using namespace std;

/*void sort(vector<int> &v)
{
    int count =0;
    for(int ele:v)
    {
        if(ele == 0 )
        {
            count++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(i < count) 
        {
            v[i]=0;
        }
        else v[i]=1;
    }
}*/

void sort( vector<int> &v)
{
    int lpt = 0 , rpt = v.size() - 1 ;

    while(lpt < rpt)
    {
        if( v[lpt]==1 &&v[rpt] ==0)
        {
            v[lpt++]=0;
            v[rpt--]=1;
        }
        if( v[lpt]==0)
        {
            lpt++;
        }
        if( v[rpt] ==1)
        {
            rpt--;
        }
    }
}

void sort2( vector<int> &v)
{
    int lpt = 0 , rpt = v.size() - 1 ;

    while(lpt < rpt)
    {
        if( v[lpt]%2!=0 &&v[rpt]%2==0)
        {
            swap(v[lpt],v[rpt]);
            v[lpt++];
            v[rpt--];
        }
        if( v[lpt]%2==0)
        {
            lpt++;
        }
        if( v[rpt]%2!=0)
        {
            rpt--;
        }
    }
}
int main()
{
    int n ; 
    cin>> n;
    vector<int> v(n);
    for(int i=0; i<n ;i++)
    {
        cin>> v[i];
    }
    /*sort(v);

    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    } */

    sort2(v); 
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }  
    return 0;
}
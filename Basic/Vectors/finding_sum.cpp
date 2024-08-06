#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int key,count=0;
    cout<<"enter the sum of elements : "<< endl;
    cin>>key;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==key)
            {
                count++;
            }
        }
    }
    cout<<"Number of pairs : "<<count;

    return 0;
}
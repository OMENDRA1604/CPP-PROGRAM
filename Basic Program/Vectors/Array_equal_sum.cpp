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
    int total_sum=0 , count = 0;
    for(int i=0;i<n;i++)
    {
        total_sum += v[i];
    }
    int prefix_sum=0 ,suffix_sum =0;
    for(int i=0;i<n;i++)
    {
        prefix_sum += v[i];    

        suffix_sum = total_sum - prefix_sum;

        if(prefix_sum == suffix_sum)
        {
            cout<<"Index at which two subarrays are equal : "<< i << endl;
            count++;
        }
    }

    if(count==0){
        cout<<"Not found"<< endl;
    }


    return 0;
}
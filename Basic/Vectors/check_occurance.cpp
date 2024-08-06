#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n ; cin>> n;

    vector<int> v(n);
    for(int i=0 ; i<n;i++)
    {
        cin>>v[i];
    }
    const int N = 1e5 + 10;
    vector<int> freq(N,0);
    for (int i=0; i<n; i++)
    {
        freq[v[i]]++;
    }
    
    cout<<"Enter number of queries : ";
    int q; cin>>q;
    while(q--)
    {
        int q_element;
        cin>> q_element;
        cout<<"Frequency of Query element : "<< freq[q_element]<<endl;
    }

    return 0;
}
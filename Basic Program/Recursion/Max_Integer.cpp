#include<iostream>
using namespace std;

int max_integer(int *arr ,int idx ,int n)
{
    if(idx == n-1)
    {
        return arr[idx];
    }

    return max(arr[idx],max_integer(arr, idx+1 , n));
}

int main()
{
    int arr[]={3,4,9,10,4};

    int result = max_integer(arr, 0, 5);
    cout<<result<<endl;

    return 0;
}
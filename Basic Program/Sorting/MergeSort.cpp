#include<iostream>
using namespace std;


void MergeSort(int *arr , int n )
{
    
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i =0; i<n ; i++)
    {
        cin>> arr[i];
    }
    MergeSort( arr , n);
    for(int i =0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
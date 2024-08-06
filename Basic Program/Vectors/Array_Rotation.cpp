#include <iostream>
#include <vector>
using namespace std;


// My program 
void rotate(int* nums, int numsSize, int k) {
    int temp, key = k % numsSize ;
    for (int i = 0; i < key; i++)
    {
        temp = *(nums + numsSize -1);
        for (int i = numsSize -2 ; i >= 0; i--)
        {
            *(nums + i + 1) = *(nums + i);
        }
        *(nums) = temp;
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int temp ;
    int key;
    cout << "Enter the rotation number : " << endl;
    cin >> key;
    for (int i = 0; i < key; i++)
    {
        temp = v[v.size()-1];
        for (int i = v.size()-2 ; i >= 0; i--)
        {
            v[i + 1] = v[i];
        }
        v[0] = temp;
    }
    cout << "After rotation : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}

//College Wallah program

/*int main()
{
    int nums[]={1,2,3,4,5};
    int numsSize = 5;
    int k=2;
    k=k%n;

    int ans[5];
    int j=0;
    for (int i = numsSize-k ; i<numsSize;i++)
    {
        ans[j++]=nums[i];  inserting last k emements 
    }

    for(int i=0; i<k ;i++)
    {
        ans[j++]=nums[i];
    }

    return 0;
}
void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;

    int ans[numsSize];
    int j=0;
    for (int i = numsSize-k ; i<numsSize;i++)
    {
        ans[j++] =*(nums+i);  
    }

    for(int i=0; i<=k;i++)
    {
        ans[j++]=*(nums+i);
    }
    for (int i = 0 ; i<numsSize;i++)
    {
        *(nums+i)=ans[i];
    }

}*/

// Leetcode Accepted Solution 
/*void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;

    int ans[numsSize];
    int j = 0;
    for (int i = numsSize - k; i < numsSize; i++) {
        ans[j++] = *(nums + i);  
    }

    for (int i = 0; i < numsSize - k; i++) {
        ans[j++] = *(nums + i);
    }

    for (int i = 0; i < numsSize; i++) {
        *(nums + i) = ans[i];
    }
}*/
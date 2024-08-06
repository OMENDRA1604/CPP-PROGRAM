#include<iostream>
using namespace std;
void print(int* ptr){
    *ptr = 6;
}
int main()
{
    int a = 5;
    int* b =&a;
    print(b); 
    cout<< a ;
    return 0;

}
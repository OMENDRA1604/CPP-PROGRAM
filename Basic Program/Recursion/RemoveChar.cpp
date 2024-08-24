#include <iostream>
#include <string.h>
using namespace std;

/*void Remove(string &s, int idx, int n) {
    if (idx == n) return;

    if (s[idx] == 'a') {
        s.erase(idx, 1); // Remove the character 'a'
        Remove(s, idx, n - 1); // Continue from the same index
    } else {
        Remove(s, idx + 1, n); // Move to the next index
    }
}*/

string Remove(string &s, int idx, int n)
{
    if (idx == n)
        return "";
    if (s[idx] == 'a')
        return Remove(s, idx + 1, n);
    else
        return s[idx] + Remove(s, idx + 1, n);
}

int main()
{
    string s = "abcdeaf";

    string result=Remove(s, 0, s.size());
    cout << result << endl;

    return 0;
}
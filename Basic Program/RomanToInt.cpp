#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // Mapping of Roman numerals to integer values
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            // Get the value of the current Roman numeral
            int value = romanValues[s[i]];
            
            // Check if the next character exists and its value is greater than the current character's value
            if (i + 1 < n && romanValues[s[i + 1]] > value) {
                // Subtraction case
                total -= value;
            } else {
                // Addition case
                total += value;
            }
        }
        
        return total;
    }
};
int main()
{
    Solution solution;
    char s[1000];
    cout << "Enter the Roman Number : " << endl;
    gets(s);
    cout << "Equivalent Integer value is : " << solution.romanToInt(s) << endl;


}
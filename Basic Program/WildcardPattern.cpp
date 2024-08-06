#include <iostream>
#include <vector>
using namespace std ;

bool isMatch(const ::string& s, const std::string& p) {
    int m = s.size();
    int n = p.size();

    // Create a 2D DP table to store intermediate results
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Base case: empty pattern matches empty string
    dp[0][0] = true;

    // Initialize the first row (empty string s)
    for (int j = 1; j <= n; ++j) {
        if (p[j - 1] == '*')
            dp[0][j] = dp[0][j - 1];
    }

    // Fill in the DP table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (p[j - 1] == '?' || s[i - 1] == p[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else if (p[j - 1] == '*')
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
        }
    }

    return dp[m][n];
}

int main() {
    string s1 = "aa";
    string p1 = "a";
    cout << "Output for s = \"" << s1 << "\", p = \"" << p1 << "\": " << (isMatch(s1, p1) ? "true" : "false") << endl;

    string s2 = "aa";
    string p2 = "*";
    cout << "Output for s = \"" << s2 << "\", p = \"" << p2 << "\": " << (isMatch(s2, p2) ? "true" : "false") << endl;

    string s3 = "adceb";
    string p3 = "*a*b";
    cout << "Output for s = \"" << s3 << "\", p = \"" << p3 << "\": " << (isMatch(s3, p3) ? "true" : "false") << endl;

    return 0;
}

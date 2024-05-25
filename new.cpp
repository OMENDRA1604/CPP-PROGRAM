#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<vector<int>> adj(n);

        // Build the adjacency list
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        // dp[node][0] - max sum when node is not XORed
        // dp[node][1] - max sum when node is XORed
        vector<vector<long long>> dp(n, vector<long long>(2, 0));
        vector<bool> visited(n, false);

        function<void(int)> dfs = [&](int node) {
            visited[node] = true;

            dp[node][0] = nums[node];
            dp[node][1] = nums[node] ^ k;

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    dfs(neighbor);

                    // If the current node is not XORed
                    dp[node][0] += max(dp[neighbor][0], dp[neighbor][1]);

                    // If the current node is XORed
                    dp[node][1] += max(dp[neighbor][0], dp[neighbor][1]);
                }
            }
        };

        dfs(0);

        return max(dp[0][0], dp[0][1]);
    }
};

// Example usage
int main() {
    Solution solution;

    vector<int> nums = {24, 78, 1, 97, 44};
    int k = 6;
    vector<vector<int>> edges = {{0, 2}, {1, 2}, {4, 2}, {3, 4}};

    long long result = solution.maximumValueSum(nums, k, edges);
    cout << "The maximum possible sum is " << result << endl;

    return 0;
}

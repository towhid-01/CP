class Solution {
public:
    const int MOD = 1e9 + 7;

    int possibleStringCount(string word, int k) {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
        vector<int> groupSizes;
        for (int i = 0; i < word.size();) {
            int j = i;
            while (j < word.size() && word[j] == word[i]) ++j;
            groupSizes.push_back(j - i);
            i = j;
        }

        long long totalWays = 1;
        for (int len : groupSizes) {
            totalWays = (totalWays * len) % MOD;
        }

        if (groupSizes.size() >= k) return totalWays;
        vector<long long> dp(k, 0);
        dp[0] = 1;

        for (int len : groupSizes) {
            vector<long long> newDp(k, 0);
            vector<long long> prefix(k + 1, 0);
        
            for (int i = 0; i < k; ++i) {
                prefix[i + 1] = (prefix[i] + dp[i]) % MOD;
            }

            for (int i = 0; i < k; ++i) {
                int l = max(0, i - len);
                newDp[i] = (prefix[i] - prefix[l] + MOD) % MOD;
            }

            dp = move(newDp);
        }

        long long invalidWays = 0;
        for (int i = 0; i < k; ++i) {
            invalidWays = (invalidWays + dp[i]) % MOD;
        }

        return (totalWays - invalidWays + MOD) % MOD;
    }
};

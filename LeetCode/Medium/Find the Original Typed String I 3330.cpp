class Solution {
public:
    int possibleStringCount(string word) {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
        int ans = 1;
        int count = 1;
        char last = word[0];

        for (int i = 1; i < word.size(); i++) {
            if (word[i] != last) {
                ans += count - 1;
                count = 1;
                last = word[i];
            } else {
                count++;
            }
        }

        ans += count - 1;
        return ans;
    }
};

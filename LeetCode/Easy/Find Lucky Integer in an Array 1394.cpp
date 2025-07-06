class Solution {
public:
    int findLucky(vector<int>& arr) {
        map < int,int> freq;
        for(auto x : arr){
            freq[x]++;
        }
        int mx=-1;
        for(auto x : freq){
            if(x.first == x.second)mx = max(mx,x.first);
        }

        return mx;
    }
};

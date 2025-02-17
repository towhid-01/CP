class Solution {
    public:
        long long maximumImportance(int n, vector<vector<int>>& roads) {
            ios_base::sync_with_stdio(false); 
            cin.tie(0); cout.tie(0);        
            long long ans = 0;
            int v[n];
            memset(v,0,sizeof(v));
            for(int i=0; i<roads.size(); i++){
                v[roads[i][0]]++;
                v[roads[i][1]]++;
            }
            sort(v,v+n);
            for(int i=0; i<n; i++){
                ans += static_cast<long long>(v[i]) * (i+1); 
            }
            return ans;
        }
    };
class Solution {
    public:
        bool canArrange(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(false); 
        cin.tie(0); cout.tie(0);
            int left=0;
            vector<int> v(k,0);
            for(int i=0;i<arr.size();i++){
                left = arr[i] % k;
                if(left < 0)left+=k;
                v[left]++;
            }
            if(v[0] % 2 != 0)return false;
    
            for(int i=1;i<=k/2;i++){
                if(v[i] != v[k-i])return false;
            }
            return true;
        }
    };
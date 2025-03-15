class Solution {
    public:
        int minPatches(vector<int>& nums, int n) {
            long long cnt=0;
            long long i=0;
            long long x=1;
            while(x<=n){
                if(i<nums.size() && nums[i]<=x){
                    x+=nums[i];
                    i++;
                }
                else {
                    x+=x;
                    cnt++;
                }
            }
    
            return cnt;
        }
    };
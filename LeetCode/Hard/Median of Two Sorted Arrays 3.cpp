class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false); 
        cin.tie(0); cout.tie(0);
        int x=nums1.size();
        for(int i=0;i<nums2.size();i++)nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        double n;
        if(nums1.size()%2==1)n=nums1[nums1.size()/2];
        
        else n=(double(nums1[nums1.size()/2])+double(nums1[(nums1.size()/2)-1]))/2;
            
        return n;
    }
    
};
